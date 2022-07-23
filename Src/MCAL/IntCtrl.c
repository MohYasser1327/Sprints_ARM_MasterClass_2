/*****************************************************************
 *  FILE DISCRIPTION
 * --------------------------------------------------------------*/
/**         \file IntCtrl.c
 *         \brief Nested Vector Interrupt Controller Driver
 * 
 *      \details The Driver Configure all MCU interrupts Priority into groups and subgroups
 *                Enable NVIC Interrupt Gate for Peripherals
 * 
 * ****************************************************************/

/*******************************************************************
 * Includes
 * *****************************************************************/
#include "Std_Types.h"
#include "IntCtrl.h"
//#include "Mcu_Hw.h"

/*******************************************************************
 *    LOCAL MACROS CONSTANT\FUNCTION
 * *****************************************************************/

/*******************************************************************
 *    LOCAL DATA
 * *****************************************************************/

/*******************************************************************
 *    GLOBAL DATA
 * *****************************************************************/

/*******************************************************************
 *    LOCAL FUNCTION PROTOTYPES
 * *****************************************************************/

/*******************************************************************
 *    GLOBAL FUNCTIONS
 * *****************************************************************/

/*******************************************************************
 *  \Syntax             : void IntCtrl_Init(void)
 *  \Description        : initialize Nvic\SCB Module by parsing the Configuration
 *                        into Nvic\SCB registers
 * 
 * \sync\Async          : Synchronous
 * \Reentrancy          : Non-Reentrant
 * *****************************************************************/

void IntCtrl_Init(void);
{
    /*Configure Grouping/Sub-Grouping System in APInit Register in SCB*/

    /*Assign Group/Sub-Group Priority in NVIC_PRIx SCB_SYSPRIx Registers*/

    /*Enable/Disable based on user Configurations in NVIC_ENx and SCB_sys Registers*/

    
}



/*******************************************************************
 *    // End of File : IntCtrl.c
 * *****************************************************************/