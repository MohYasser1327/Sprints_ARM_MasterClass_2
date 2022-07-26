/*****************************************************************
 *  FILE DISCRIPTION
 * --------------------------------------------------------------*/
/**         \file Port.h
 *         Module: Port
 * 
 *      Description: Header file for TM4C123GH6PM Microcontroller - Port Driver.
 *       
 *         Author: Mohamed Yasser        
 * 
 * ****************************************************************/

#ifndef PORT_H
#define PORT_H
/*******************************************************************
 * Includes
 * *****************************************************************/
#include "Common_Macros.h"
#include "Std_Types.h"
/*******************************************************************
 * Global Constant Macros
 * *****************************************************************/
/*
 * Macros for Dio Status
 */
#define PORT_INITIALIZED                (1U)
#define PORT_NOT_INITIALIZED            (0U)


/*******************************************************************
 * Global Functions Macros
 * *****************************************************************/
/*******************************************************************************
 *                              Pins Special ID Index                           *
 *******************************************************************************/
  
   /* Port A Definisions */
   
#define PortA_Pin0    0x00
#define PortA_Pin1    0x01
#define PortA_Pin2    0x02
#define PortA_Pin3    0x03
#define PortA_Pin4    0x04
#define PortA_Pin5    0x05
#define PortA_Pin6    0x06
#define PortA_Pin7    0x07
//*******************************************
   
   /* Port B Definisions */
   
#define PortB_Pin0    0x10
#define PortB_Pin1    0x11
#define PortB_Pin2    0x12
#define PortB_Pin3    0x13
#define PortB_Pin4    0x14
#define PortB_Pin5    0x15
#define PortB_Pin6    0x16
#define PortB_Pin7    0x17
//********************************************
   
   /* Port C Definisions */
   
#define PortC_Pin4    0x24
#define PortC_Pin5    0x25
#define PortC_Pin6    0x26
#define PortC_Pin7    0x27
//********************************************
   
   /* Port D Definisions */
   
#define PortD_Pin0    0x30
#define PortD_Pin1    0x31
#define PortD_Pin2    0x32
#define PortD_Pin3    0x33
#define PortD_Pin4    0x34
#define PortD_Pin5    0x35
#define PortD_Pin6    0x36
#define PortD_Pin7    0x37
//********************************************
   
   /* Port E Definisions */
   
#define PortE_Pin0    0x40
#define PortE_Pin1    0x41
#define PortE_Pin2    0x42
#define PortE_Pin3    0x43
#define PortE_Pin4    0x44
#define PortE_Pin5    0x45
//**********************************************
   
   /* Port F Definisions */
   
#define PortF_Pin0    0x50
#define PortF_Pin1    0x51
#define PortF_Pin2    0x52
#define PortF_Pin3    0x53
#define PortF_Pin4    0x54
#define PortF_Pin5    0x55
//**********************************************
//**********************************************


/*******************************************************************************
 *                              Alternative Functions                             *
 *******************************************************************************/
#define PORT_PIN_MODE_ADC 0x0A
#define PORT_PIN_MODE_DAC 0x0B
/* Alternative Functionality 0: */
   
#define PORT_PIN_MODE_DIO                ((uint8)0x00)
//************************************************************
//************************************************************ 
   
// Alternative Functionality 1:
  
#define PORT_PIN_A0_MODE_UART0            ((uint8)0x01)
#define PORT_PIN_A1_MODE_UART0            ((uint8)0x01)
//*************************************************************
#define PORT_PIN_B0_MODE_UART1            ((uint8)0x01)
#define PORT_PIN_B1_MODE_UART1            ((uint8)0x01)
//*************************************************************
#define PORT_PIN_C4_MODE_UART4            ((uint8)0x01)
#define PORT_PIN_C5_MODE_UART4            ((uint8)0x01)
//*************************************************************
#define PORT_PIN_C6_MODE_UART3            ((uint8)0x01)
#define PORT_PIN_C7_MODE_UART3            ((uint8)0x01)
//*************************************************************
#define PORT_PIN_D4_MODE_UART6            ((uint8)0x01)
#define PORT_PIN_D5_MODE_UART6            ((uint8)0x01)
//*************************************************************
#define PORT_PIN_D6_MODE_UART2            ((uint8)0x01)
#define PORT_PIN_D7_MODE_UART2            ((uint8)0x01)
//*************************************************************
#define PORT_PIN_E0_MODE_UART7            ((uint8)0x01)
#define PORT_PIN_E1_MODE_UART7            ((uint8)0x01)
//*************************************************************
#define PORT_PIN_E4_MODE_UART5            ((uint8)0x01)
#define PORT_PIN_E5_MODE_UART5            ((uint8)0x01)
//*************************************************************
#define PORT_PIN_F0_MODE_UART1            ((uint8)0x01)
#define PORT_PIN_F1_MODE_UART1            ((uint8)0x01)
//*************************************************************
#define PORT_PIN_D0_MODE_SPI3             ((uint8)0x01)
#define PORT_PIN_D1_MODE_SPI3             ((uint8)0x01)
#define PORT_PIN_D2_MODE_SPI3             ((uint8)0x01)
#define PORT_PIN_D3_MODE_SPI3             ((uint8)0x01)
//*************************************************************
//*************************************************************

/* Alternative Functionality 2:*/

#define PORT_PIN_A2_MODE_SPI0             ((uint8)0x02)
#define PORT_PIN_A3_MODE_SPI0             ((uint8)0x02)
#define PORT_PIN_A4_MODE_SPI0             ((uint8)0x02)
#define PORT_PIN_A5_MODE_SPI0             ((uint8)0x02)
//*************************************************************
#define PORT_PIN_B4_MODE_SPI2             ((uint8)0x02)
#define PORT_PIN_B5_MODE_SPI2             ((uint8)0x02)
#define PORT_PIN_B6_MODE_SPI2             ((uint8)0x02)
#define PORT_PIN_B7_MODE_SPI2             ((uint8)0x02)
//*************************************************************
#define PORT_PIN_D0_MODE_SPI1             ((uint8)0x02)
#define PORT_PIN_D1_MODE_SPI1             ((uint8)0x02)
#define PORT_PIN_D2_MODE_SPI1             ((uint8)0x02)
#define PORT_PIN_D3_MODE_SPI1             ((uint8)0x02)
//*************************************************************
#define PORT_PIN_F0_MODE_SPI1             ((uint8)0x02)
#define PORT_PIN_F1_MODE_SPI1             ((uint8)0x02)
#define PORT_PIN_F2_MODE_SPI1             ((uint8)0x02)
#define PORT_PIN_F3_MODE_SPI1             ((uint8)0x02)
//*************************************************************
#define PORT_PIN_C4_MODE_UART1            ((uint8)0x02)
#define PORT_PIN_C5_MODE_UART1            ((uint8)0x02)
//*************************************************************
//*************************************************************

/*Alternative Functionality 3:*/

#define PORT_PIN_A5_MODE_I2C1             ((uint8)0x03)
#define PORT_PIN_A6_MODE_I2C1             ((uint8)0x03)
//*************************************************************
#define PORT_PIN_B2_MODE_I2C0             ((uint8)0x03)
#define PORT_PIN_B3_MODE_I2C0             ((uint8)0x03)
//*************************************************************
#define PORT_PIN_D0_MODE_I2C3             ((uint8)0x03)
#define PORT_PIN_D1_MODE_I2C3             ((uint8)0x03)
//*************************************************************
#define PORT_PIN_E4_MODE_I2C2             ((uint8)0x03)
#define PORT_PIN_E5_MODE_I2C2             ((uint8)0x03)
//*************************************************************
#define PORT_PIN_F0_MODE_CAN0             ((uint8)0x03)
#define PORT_PIN_F3_MODE_CAN0             ((uint8)0x03)
//*************************************************************
//*************************************************************

/*Alternative Functionality 4:*/

#define PORT_PIN_B4_MODE_M0PWM2            ((uint8)0x04)
//*************************************************************
#define PORT_PIN_B5_MODE_M0PWM3            ((uint8)0x04)
//*************************************************************
#define PORT_PIN_B6_MODE_M0PWM0            ((uint8)0x04)
//*************************************************************
#define PORT_PIN_B7_MODE_M0PWM1            ((uint8)0x04)
//*************************************************************
#define PORT_PIN_C4_MODE_M0PWM6            ((uint8)0x04)
//*************************************************************
#define PORT_PIN_C5_MODE_M0PWM7            ((uint8)0x04)
//*************************************************************
#define PORT_PIN_D0_MODE_M0PWM6            ((uint8)0x04)
//*************************************************************
#define PORT_PIN_D1_MODE_M0PWM7            ((uint8)0x04)
//*************************************************************
#define PORT_PIN_E4_MODE_M0PWM4            ((uint8)0x04)
//*************************************************************
#define PORT_PIN_E5_MODE_M0PWM5            ((uint8)0x04)
//*************************************************************
#define PORT_PIN_D2_MODE_M0FAULT          ((uint8)0x04)
//*************************************************************
#define PORT_PIN_D6_MODE_M0FAULT          ((uint8)0x04)
//*************************************************************
#define PORT_PIN_F2_MODE_M0FAULT          ((uint8)0x04)
//*************************************************************
//*************************************************************

/*Alternative Functionality 5:*/

#define PORT_PIN_A6_MODE_M1PWM             ((uint8)0x05)
//*************************************************************
#define PORT_PIN_A7_MODE_M1PWM             ((uint8)0x05)
//*************************************************************
#define PORT_PIN_D0_MODE_M1PWM             ((uint8)0x05)
//*************************************************************
#define PORT_PIN_D1_MODE_M1PWM             ((uint8)0x05)
//*************************************************************
#define PORT_PIN_E4_MODE_M1PWM             ((uint8)0x05)
//*************************************************************
#define PORT_PIN_E5_MODE_M1PWM             ((uint8)0x05)
//*************************************************************
#define PORT_PIN_F0_MODE_M1PWM             ((uint8)0x05)
//*************************************************************
#define PORT_PIN_F1_MODE_M1PWM             ((uint8)0x05)
//*************************************************************
#define PORT_PIN_F2_MODE_M1PWM             ((uint8)0x05)
//*************************************************************
#define PORT_PIN_F3_MODE_M1PWM             ((uint8)0x05)
//*************************************************************
#define PORT_PIN_F4_MODE_M1FAULT           ((uint8)0x05)
//*************************************************************
//*************************************************************

/*Alternative Functionality 6:*/

#define PORT_PIN_C4_MODE_IDX1              ((uint8)0x06)
//*************************************************************
#define PORT_PIN_D3_MODE_IDX0              ((uint8)0x06)
//*************************************************************
#define PORT_PIN_F4_MODE_IDX0              ((uint8)0x06)
//*************************************************************
#define PORT_PIN_C5_MODE_PH1               ((uint8)0x06)
#define PORT_PIN_C6_MODE_PH1               ((uint8)0x06)
//*************************************************************
#define PORT_PIN_D6_MODE_PH0               ((uint8)0x06)
#define PORT_PIN_D7_MODE_PH0               ((uint8)0x06)
//*************************************************************
#define PORT_PIN_F0_MODE_PH0               ((uint8)0x06)
#define PORT_PIN_F1_MODE_PH0               ((uint8)0x06)
//*************************************************************
//*************************************************************

/*Alternative Functionality 7:*/

#define PORT_PIN_B0_MODE_TIMER2             ((uint8)0x07)
#define PORT_PIN_B1_MODE_TIMER2             ((uint8)0x07)
//*************************************************************
#define PORT_PIN_B2_MODE_TIMER3             ((uint8)0x07)
#define PORT_PIN_B3_MODE_TIMER3             ((uint8)0x07)
//*************************************************************
#define PORT_PIN_B4_MODE_TIMER1             ((uint8)0x07)
#define PORT_PIN_B5_MODE_TIMER1             ((uint8)0x07)
//*************************************************************
#define PORT_PIN_B6_MODE_TIMER0             ((uint8)0x07)
#define PORT_PIN_B7_MODE_TIMER0             ((uint8)0x07)
//*************************************************************
#define PORT_PIN_F0_MODE_TIMER0             ((uint8)0x07)
#define PORT_PIN_F1_MODE_TIMER0             ((uint8)0x07)
//*************************************************************
#define PORT_PIN_F2_MODE_TIMER1             ((uint8)0x07)
#define PORT_PIN_F3_MODE_TIMER1             ((uint8)0x07)
//************************************************************
#define PORT_PIN_F4_MODE_TIMER2             ((uint8)0x07)
//*************************************************************
#define PORT_PIN_C4_MODE_WIDE_TIMER0         ((uint8)0x07)
#define PORT_PIN_C5_MODE_WIDE_TIMER0         ((uint8)0x07)
//*************************************************************
#define PORT_PIN_C6_MODE_WIDE_TIMER1         ((uint8)0x07)
#define PORT_PIN_C7_MODE_WIDE_TIMER1         ((uint8)0x07)
//*************************************************************
#define PORT_PIN_D0_MODE_WIDE_TIMER2         ((uint8)0x07)
#define PORT_PIN_D1_MODE_WIDE_TIMER2         ((uint8)0x07)
//*************************************************************
#define PORT_PIN_D2_MODE_WIDE_TIMER3         ((uint8)0x07)
#define PORT_PIN_D3_MODE_WIDE_TIMER3         ((uint8)0x07)
//*************************************************************
#define PORT_PIN_D4_MODE_WIDE_TIMER4         ((uint8)0x07)
#define PORT_PIN_D5_MODE_WIDE_TIMER4         ((uint8)0x07)
//*************************************************************
#define PORT_PIN_D6_MODE_WIDE_TIMER5         ((uint8)0x07)
#define PORT_PIN_D7_MODE_WIDE_TIMER5         ((uint8)0x07)
//************************************************************
//************************************************************
   
/*Alternative Functionality 8:*/

#define PORT_PIN_A0_MODE_CAN1              ((uint8)0x08)
#define PORT_PIN_A1_MODE_CAN1              ((uint8)0x08)
//*************************************************************
#define PORT_PIN_B4_MODE_CAN0              ((uint8)0x08)
#define PORT_PIN_B5_MODE_CAN0              ((uint8)0x08)
//*************************************************************
#define PORT_PIN_E4_MODE_CAN0              ((uint8)0x08)
#define PORT_PIN_E5_MODE_CAN0              ((uint8)0x08)
//*************************************************************
#define PORT_PIN_C4_MODE_UART             ((uint8)0x08)
#define PORT_PIN_C5_MODE_UART             ((uint8)0x08)
//*************************************************************
#define PORT_PIN_D7_MODE_NMI              ((uint8)0x08)
//*************************************************************
#define PORT_PIN_F0_MODE_NMI              ((uint8)0x08)
//*************************************************************
#define PORT_PIN_C6_MODE_USB0              ((uint8)0x08)
#define PORT_PIN_C7_MODE_USB0              ((uint8)0x08)
//*************************************************************
#define PORT_PIN_D2_MODE_USB0              ((uint8)0x08)
#define PORT_PIN_D3_MODE_USB0              ((uint8)0x08)
//*************************************************************
#define PORT_PIN_F0_MODE_USB0              ((uint8)0x08)
//*************************************************************
//*************************************************************
   
/*Alternative Functionality 9:*/
 
#define PORT_PIN_F0_MODE_C             ((uint8)0x09)
#define PORT_PIN_F0_MODE_C             ((uint8)0x09)
//*************************************************************
//*************************************************************
   
/*Alternative Functionality 14:*/
   
#define PORT_PIN_F1_MODE_TRACE            ((uint8)0x0E)
#define PORT_PIN_F2_MODE_TRACE            ((uint8)0x0E)
#define PORT_PIN_F3_MODE_TRACE            ((uint8)0x0E)
//*************************************************************
//*************************************************************
/*******************************************************************************
 *                              Module Definitions                             *
 *******************************************************************************/

/* GPIO Registers base addresses */
#define GPIO_PORTA_BASE_ADDRESS           0x40004000
#define GPIO_PORTB_BASE_ADDRESS           0x40005000
#define GPIO_PORTC_BASE_ADDRESS           0x40006000
#define GPIO_PORTD_BASE_ADDRESS           0x40007000
#define GPIO_PORTE_BASE_ADDRESS           0x40024000
#define GPIO_PORTF_BASE_ADDRESS           0x40025000

/* GPIO Registers offset addresses */
#define PORT_DATA_REG_OFFSET              0x3FC
#define PORT_DIR_REG_OFFSET               0x400
#define PORT_ALT_FUNC_REG_OFFSET          0x420
#define PORT_PULL_UP_REG_OFFSET           0x510
#define PORT_PULL_DOWN_REG_OFFSET         0x514
#define PORT_DIGITAL_ENABLE_REG_OFFSET    0x51C
#define PORT_LOCK_REG_OFFSET              0x520
#define PORT_COMMIT_REG_OFFSET            0x524
#define PORT_ANALOG_MODE_SEL_REG_OFFSET   0x528
#define PORT_CTL_REG_OFFSET               0x52C
/******************************************************************************
 *                      API Service Id Macros                                 *
 ******************************************************************************/
/* Service ID for Port Init */
#define PORT_INIT_SID                   (uint8)0x00

/* Service ID for Set Pin Direction */
#define PORT_SET_PIN_DIRECTION_SID      (uint8)0x01

/* Service ID for Refresh Port Direction */
#define PORT_REFRESH_PORT_DIRECTION_SID (uint8)0x02

/* Service ID for Get Version Info */
#define PORT_GET_VERSION_INFO_SID       (uint8)0x03

/* Service ID for Set Pin Initial_Mode */
#define PORT_SET_PIN_MODE_SID           (uint8)0x04

/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/

/* Description: Data type for the symbolic name of a port pin. */
typedef uint8 Port_PinType;

/* Description: Different port pin modes.  */
typedef uint8 Port_PinModeType;
/*Number of configured ports */
#define Number_Of_Ports  8

/*Number of the configured pins per ports */

#define Number_Of_Pins   8

/* Description: Enum to hold PIN direction */
typedef enum
{
    PORT_PIN_IN,PORT_PIN_OUT
}Port_PinDirectionType;

/* Description: Enum to hold internal Resistor type for PIN */
typedef enum
{
    OFF,PULL_UP,PULL_DOWN
}Port_InternalResistor;

typedef enum
{
    Direction_Changeable,Direction_Un_Changeable
}Port_PinDirectionChange;

typedef enum
{
    Mode_Is_Un_Changeable,Mode_Is_Changeable
}Port_PinModeChange;

typedef enum
{
    PIN_LEVEL_LOW,PIN_LEVEL_HIGH
}Port_PinLevel;

/* Description: Structure to configure each individual PIN:
 *	1. the PORT Which the pin belongs to. 0, 1, 2, 3, 4 or 5
 *	2. the number of the pin in the PORT.
 *      3. the direction of pin --> INPUT or OUTPUT
 *      4. the internal Resistor --> Disable, Pull up or Pull down
 */
typedef struct 
{
    Port_PinType Pin_Id; 
    Port_PinDirectionType direction;
    Port_PinDirectionChange Direction_Change;
    Port_PinModeType Initial_Mode;
    Port_PinModeChange Mode_Change;
    Port_InternalResistor Resistor;
    Port_PinLevel Initial_Value;
}Port_ConfigPin;

/* Description: Structure to configue each PORT 
*       1. Number Of configured Pins per Port
*       2. Array of structures of type Port_ConfigPin
*/
typedef struct
{    uint8 Port_NumberOfPortPins;
     Port_ConfigPin Pins[Number_Of_Pins];
}Port_Container;

/* Description: Multiple Configuration Structure containing mutliple
*  structures of type Port_Container
*/
typedef struct
{
     Port_Container Ports[Number_Of_Ports];
}Port_ConfigType;
/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

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
*              - Setup the internal Resistor for i/p pin
************************************************************************************/
void Port_SetupGpioPin(const Port_ConfigType *ConfigPtr );

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
************************************************************************************/
void Port_Init(const Port_ConfigType * ConfigPtr);

#endif /*Port.h*/

/*******************************************************************
 *    // End of File : Port.h
 * *****************************************************************/