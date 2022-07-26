/*****************************************************************
 *  FILE DISCRIPTION
 * --------------------------------------------------------------*/
/**         \file Port.c
 *         \brief Port
 * 
 *      \details Source file for TM4C123GH6PM Microcontroller - Port Driver.
 *          Author: Mohamed Yasser
 * 
 * ****************************************************************/

/*******************************************************************
 * Includes
 * *****************************************************************/
#include "Std_Types.h"
#include "IntCtrl.h"
#include "Mcu_Hw.h"

STATIC const Port_Container *PortConfig = NULL_PTR;
STATIC uint8 Port_Status = PORT_NOT_INITIALIZED;
/************************************************************************************
* Service Name: Port_SetupGpioPin
* Sync/Async: Synchronous
* Reentrancy: reentrant
* Parameters (in): ConfigPtr - Pointer to post-build configuration data
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Setup the pin configuration:
*              - Setup the pin as Digital GPIO pin
*              - Setup the direction of the GPIO pin
*              - Provide initial value for o/p pin
*              - Setup the internal Resistor for i/p pin
************************************************************************************/
void Port_SetupGpioPin(const Port_ConfigType * ConfigPtr );
/************************************************************************************
* Service Name: Port_Init
* Service ID[hex]: 0x00
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Parameters (in): ConfigPtr - Pointer to post-build configuration data
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Initialize the Port Driver
*              -
*              -
*              -
*              -
************************************************************************************/
void Port_Init(const Port_ConfigType* ConfigPtr)
 {
  //boolean error= FALSE;
#if (PORT_DEV_ERROR_DETECT == STD_ON)
	/* check if the input configuration pointer is not a NULL_PTR */
	if (NULL_PTR == ConfigPtr)
	{
		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_INIT_SID,
		     PORT_E_PARAM_CONFIG);
	}
	else
#endif
  {
		/*
		 * Set the module state to initialized and point to the PB configuration structure using a global pointer.
		 * This global pointer is global to be used by other functions to read the PB configuration structures
		 */
    Port_Status = PORT_INITIALIZED;
    PortConfig = ConfigPtr->Ports; /* address of the first Port structure --> Ports[0] */
   static volatile uint32 * Port_Ptr = NULL_PTR; /* point to the required Port Registers base address */
   static volatile uint32 delay = 0;
   static uint8 Port_Index;
   static uint8 Pin_Index;
for(Port_Index=0; Port_Index<Number_Of_Ports; Port_Index++)  
    {
    switch(Port_Index)
     {
        case  0: Port_Ptr = (volatile uint32 *)GPIO_PORTA_BASE_ADDRESS; /* PORTA Base Address */
		 break;
	case  1: Port_Ptr = (volatile uint32 *)GPIO_PORTB_BASE_ADDRESS; /* PORTB Base Address */
		 break;
	case  2: Port_Ptr = (volatile uint32 *)GPIO_PORTC_BASE_ADDRESS; /* PORTC Base Address */
		 break;
	case  3: Port_Ptr = (volatile uint32 *)GPIO_PORTD_BASE_ADDRESS; /* PORTD Base Address */
		 break;
        case  4: Port_Ptr = (volatile uint32 *)GPIO_PORTE_BASE_ADDRESS; /* PORTE Base Address */
		 break;
        case  5: Port_Ptr = (volatile uint32 *)GPIO_PORTF_BASE_ADDRESS; /* PORTF Base Address */
		 break;
     }
    
     /* Enable clock for PORT and allow time for clock to start*/
     SYSCTL_REGCGC2_REG |= (1<<Port_Index);
     delay = SYSCTL_REGCGC2_REG;
    
    for(Pin_Index; Pin_Index<Number_Of_Pins; Pin_Index++)
      {
    
    if( ((Port_Index == 3) && (Pin_Index == 7)) || ((Port_Index == 5) && (Pin_Index == 0)) ) /* PD7 or PF0 */
        {
        *(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_LOCK_REG_OFFSET) = 0x4C4F434B;      /* Unlock the GPIOCR register */   
        SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_COMMIT_REG_OFFSET) , Pin_Index);  /* Set the corresponding bit in GPIOCR register to allow changes on this pin */
        }
   
    else
       {
        /* Do Nothing ... No need to unlock the commit register for this pin */
       }
     }
 for(Pin_Index=0; Pin_Index<PortConfig[Port_Index].Port_NumberOfPortPins; Pin_Index++)	
    {
	  uint8 DioModeFlag=0;
	  uint8 AFModeFlag=0;
	  uint8 PinPos= PortConfig[Port_Index].Pins[Pin_Index].Pin_Id & 0x0F;
          CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ALT_FUNC_REG_OFFSET) , Pin_Index);      /* Clear the corresponding bit in the GPIOAMSEL register to disable analog functionality on this pin */
     switch(PortConfig[Port_Index].Pins[Pin_Index].Initial_Mode)
	   {
	          /* DIO Initial_Mode */
              case PORT_PIN_MODE_DIO:      
                          DioModeFlag=1;
	               break;

              /* Analog Initial_Mode */
	          case PORT_PIN_MODE_ADC:
	          case PORT_PIN_MODE_DAC:     
                    SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ANALOG_MODE_SEL_REG_OFFSET) , Pin_Index);
	               break;

             /* AF Initial_Mode */
	          default:                     
                    AFModeFlag = 1;
	   }
      if(DioModeFlag == 1)
       {
           CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ANALOG_MODE_SEL_REG_OFFSET) , Pin_Index);      /* Clear the corresponding bit in the GPIOAMSEL register to disable analog functionality on this pin */
           SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ALT_FUNC_REG_OFFSET) , Pin_Index);             /* Disable Alternative function for this pin by clear the corresponding bit in GPIOAFSEL register */
           *(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_CTL_REG_OFFSET) |= ~(0x00000001 << (Pin_Index * 4));     /* Clear the PMCx bits for this pin */
    
    	  /* Output Direction */
    if(PortConfig[Port_Index].Pins[Pin_Index].direction == PORT_PIN_OUT)
            {
	      SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIR_REG_OFFSET) , Pin_Index);                /* Set the corresponding bit in the GPIODIR register to configure it as output pin */
        
         if(PortConfig[Port_Index].Pins[Pin_Index].Initial_Value == STD_HIGH)
                {
                  SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DATA_REG_OFFSET) , Pin_Index);          /* Set the corresponding bit in the GPIODATA register to provide initial value 1 */
                }
         else
               {
                 CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DATA_REG_OFFSET) , Pin_Index);        /* Clear the corresponding bit in the GPIODATA register to provide initial value 0 */
               }
           }
             /* Input Direction */
    else if(PortConfig[Port_Index].Pins[Pin_Index].direction == PORT_PIN_IN)
           {
             CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIR_REG_OFFSET) , Pin_Index);             /* Clear the corresponding bit in the GPIODIR register to configure it as input pin */
                            /* Pull-up Resistor*/
        if(PortConfig[Port_Index].Pins[Pin_Index].Resistor == PULL_UP)
              {
               SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PULL_UP_REG_OFFSET) , Pin_Index);       /* Set the corresponding bit in the GPIOPUR register to enable the internal pull up pin */
              }
                              /*Pull-Down*/
        else if(PortConfig[Port_Index].Pins[Pin_Index].Resistor == PULL_DOWN)
             {
              SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PULL_DOWN_REG_OFFSET) , Pin_Index);     /* Set the corresponding bit in the GPIOPDR register to enable the internal pull down pin */
             }
        else
             {
            CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PULL_UP_REG_OFFSET) , Pin_Index);     /* Clear the corresponding bit in the GPIOPUR register to disable the internal pull up pin */
            CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PULL_DOWN_REG_OFFSET) , Pin_Index);   /* Clear the corresponding bit in the GPIOPDR register to disable the internal pull down pin */
             }
          }
   else
         {
        /* Do Nothing */
         }
           SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIGITAL_ENABLE_REG_OFFSET) , Pin_Index);        /* Set the corresponding bit in the GPIODEN register to enable digital functionality on this pin */
   
       }
   if(AFModeFlag == 1)
        {
         SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ALT_FUNC_REG_OFFSET) , Pin_Index);             /* Enable Alternative function for this pin by clear the corresponding bit in GPIOAFSEL register */
        *(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ALT_FUNC_REG_OFFSET) &= ~(0xFUL << PinPos*4);
        *(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ALT_FUNC_REG_OFFSET) |= (PortConfig[Port_Index].Pins[Pin_Index].Initial_Mode << PinPos*4);
         /* Output Direction */
     if(PortConfig[Port_Index].Pins[Pin_Index].direction == PORT_PIN_OUT)
          {
	 SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIR_REG_OFFSET) , Pin_Index);                /* Set the corresponding bit in the GPIODIR register to configure it as output pin */
        
        if(PortConfig[Port_Index].Pins[Pin_Index].Initial_Value == STD_HIGH)
              {
               SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DATA_REG_OFFSET) , Pin_Index);          /* Set the corresponding bit in the GPIODATA register to provide initial value 1 */
              }
        else
              {
               CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DATA_REG_OFFSET) , Pin_Index);        /* Clear the corresponding bit in the GPIODATA register to provide initial value 0 */
              }
         }
             /* Input Direction */
    else if(PortConfig[Port_Index].Pins[Pin_Index].direction == PORT_PIN_IN)
         {
        CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIR_REG_OFFSET) , Pin_Index);             /* Clear the corresponding bit in the GPIODIR register to configure it as input pin */
                            /* Pull-up Resistor*/
         if(PortConfig[Port_Index].Pins[Pin_Index].Resistor == PULL_UP)
             {
             SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PULL_UP_REG_OFFSET) , Pin_Index);       /* Set the corresponding bit in the GPIOPUR register to enable the internal pull up pin */
             }
                              /*Pull-Down*/
         else if(PortConfig[Port_Index].Pins[Pin_Index].Resistor == PULL_DOWN)
             {
              SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PULL_DOWN_REG_OFFSET) , Pin_Index);     /* Set the corresponding bit in the GPIOPDR register to enable the internal pull down pin */
             }
         else
             {
              CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PULL_UP_REG_OFFSET) , Pin_Index);     /* Clear the corresponding bit in the GPIOPUR register to disable the internal pull up pin */
              CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PULL_DOWN_REG_OFFSET) , Pin_Index);   /* Clear the corresponding bit in the GPIOPDR register to disable the internal pull down pin */
             }
          }
    else
         {
       /* Do Nothing */
         }
     }
    }
   }
  }
 }


/*******************************************************************
 *    // End of File : IntCtrl.c
 * *****************************************************************/