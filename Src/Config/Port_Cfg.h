/*****************************************************************
 *  FILE DISCRIPTION
 * --------------------------------------------------------------*/
/**         \file Port_Cfg.h
 *         Module: PORT
 * 
 *      Description: Pre-Compile Configuration Header file for TM4C123GH6PM Microcontroller - Port Driver
 *     
 *               Author:Mohamed Yasser
 *               
 * 
 * ****************************************************************/

#ifndef PORT_CFG_H
#define PORT_CFG_H
/*******************************************************************
 * Includes
 * *****************************************************************/

/*******************************************************************
 * Global Constant Macros
 * *****************************************************************/

/*******************************************************************
 * Global Functions Macros
 * *****************************************************************/



/*******************************************************************
 * Global Data Types and Structures
 * *****************************************************************/

/* PORT Configured 
    Port_PinType pin_num; 
    Port_PinDirectionType direction;
    Port_PinDirectionChange dirChange;
    Port_PinModeType mode;
    Port_PinModeChange modeChange;
    Port_InternalResistor resistor;
    Port_PinLevel initial_value;
*/
/* DIO Configured Port ID's  */

#define PortConf_A_PortNumberOfPortPins  8

#define PortConf_A0_PIN_NUM              0x00
#define PortConf_A0_PIN_DIR              PORT_PIN_OUT
#define PortConf_A0_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_A0_PIN_MODE             0x00
#define PortConf_A0_PIN_MODECHANGE       Mode_Is_Un_Changeable
#define PortConf_A0_PIN_RESISTOR         OFF
#define PortConf_A0_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_A1_PIN_NUM              0x01
#define PortConf_A1_PIN_DIR              PORT_PIN_IN
#define PortConf_A1_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_A1_PIN_MODE             0x00
#define PortConf_A1_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_A1_PIN_RESISTOR         OFF
#define PortConf_A1_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_A2_PIN_NUM              0x02
#define PortConf_A2_PIN_DIR              PORT_PIN_IN
#define PortConf_A2_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_A2_PIN_MODE             0x00
#define PortConf_A2_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_A2_PIN_RESISTOR         OFF
#define PortConf_A2_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_A3_PIN_NUM              0x03
#define PortConf_A3_PIN_DIR              PORT_PIN_IN
#define PortConf_A3_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_A3_PIN_MODE             0x00
#define PortConf_A3_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_A3_PIN_RESISTOR         OFF
#define PortConf_A3_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_A4_PIN_NUM              0x04
#define PortConf_A4_PIN_DIR              PORT_PIN_IN
#define PortConf_A4_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_A4_PIN_MODE             0x00
#define PortConf_A4_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_A4_PIN_RESISTOR         OFF
#define PortConf_A4_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_A5_PIN_NUM              0x05
#define PortConf_A5_PIN_DIR              PORT_PIN_IN
#define PortConf_A5_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_A5_PIN_MODE             0x00
#define PortConf_A5_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_A5_PIN_RESISTOR         OFF
#define PortConf_A5_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_A6_PIN_NUM              0x06
#define PortConf_A6_PIN_DIR              PORT_PIN_IN
#define PortConf_A6_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_A6_PIN_MODE             0x00
#define PortConf_A6_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_A6_PIN_RESISTOR         OFF
#define PortConf_A6_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_A7_PIN_NUM              0x07
#define PortConf_A7_PIN_DIR              PORT_PIN_IN
#define PortConf_A7_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_A7_PIN_MODE             0x00
#define PortConf_A7_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_A7_PIN_RESISTOR         OFF
#define PortConf_A7_PIN_INITIAL          PIN_LEVEL_LOW

//********************************************************
//********************************************************

#define PortConf_B_PortNumberOfPortPins  8

#define PortConf_B0_PIN_NUM              0x08
#define PortConf_B0_PIN_DIR              PORT_PIN_IN
#define PortConf_B0_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_B0_PIN_MODE             0x00
#define PortConf_B0_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_B0_PIN_RESISTOR         OFF
#define PortConf_B0_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_B1_PIN_NUM              0x09
#define PortConf_B1_PIN_DIR              PORT_PIN_IN
#define PortConf_B1_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_B1_PIN_MODE             0x00
#define PortConf_B1_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_B1_PIN_RESISTOR         OFF
#define PortConf_B1_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_B2_PIN_NUM              0x0A
#define PortConf_B2_PIN_DIR              PORT_PIN_IN
#define PortConf_B2_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_B2_PIN_MODE             0x00
#define PortConf_B2_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_B2_PIN_RESISTOR         OFF
#define PortConf_B2_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_B3_PIN_NUM              0x0B
#define PortConf_B3_PIN_DIR              PORT_PIN_IN
#define PortConf_B3_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_B3_PIN_MODE             0x00
#define PortConf_B3_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_B3_PIN_RESISTOR         OFF
#define PortConf_B3_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_B4_PIN_NUM              0x0C
#define PortConf_B4_PIN_DIR              PORT_PIN_IN
#define PortConf_B4_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_B4_PIN_MODE             0x00
#define PortConf_B4_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_B4_PIN_RESISTOR         OFF
#define PortConf_B4_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_B5_PIN_NUM              0x0D
#define PortConf_B5_PIN_DIR              PORT_PIN_IN
#define PortConf_B5_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_B5_PIN_MODE             0x00
#define PortConf_B5_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_B5_PIN_RESISTOR         OFF
#define PortConf_B5_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_B6_PIN_NUM              0x0E
#define PortConf_B6_PIN_DIR              PORT_PIN_IN
#define PortConf_B6_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_B6_PIN_MODE             0x00
#define PortConf_B6_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_B6_PIN_RESISTOR         OFF
#define PortConf_B6_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_B7_PIN_NUM              0x0F
#define PortConf_B7_PIN_DIR              PORT_PIN_IN
#define PortConf_B7_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_B7_PIN_MODE             0x00
#define PortConf_B7_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_B7_PIN_RESISTOR         OFF
#define PortConf_B7_PIN_INITIAL          PIN_LEVEL_LOW

//********************************************************
//********************************************************

#define PortConf_C_PortNumberOfPortPins  4

#define PortConf_C4_PIN_NUM              0x10
#define PortConf_C4_PIN_DIR              PORT_PIN_IN
#define PortConf_C4_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_C4_PIN_MODE             0x00
#define PortConf_C4_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_C4_PIN_RESISTOR         OFF
#define PortConf_C4_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_C5_PIN_NUM              0x11
#define PortConf_C5_PIN_DIR              PORT_PIN_IN
#define PortConf_C5_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_C5_PIN_MODE             0x00
#define PortConf_C5_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_C5_PIN_RESISTOR         OFF
#define PortConf_C5_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_C6_PIN_NUM              0x12
#define PortConf_C6_PIN_DIR              PORT_PIN_IN
#define PortConf_C6_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_C6_PIN_MODE             0x00
#define PortConf_C6_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_C6_PIN_RESISTOR         OFF
#define PortConf_C6_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_C7_PIN_NUM              0x13
#define PortConf_C7_PIN_DIR              PORT_PIN_IN
#define PortConf_C7_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_C7_PIN_MODE             0x00
#define PortConf_C7_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_C7_PIN_RESISTOR         OFF
#define PortConf_C7_PIN_INITIAL          PIN_LEVEL_LOW

//********************************************************
//********************************************************

#define PortConf_D_PortNumberOfPortPins  8

#define PortConf_D0_PIN_NUM              0x14
#define PortConf_D0_PIN_DIR              PORT_PIN_IN
#define PortConf_D0_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_D0_PIN_MODE             0x00
#define PortConf_D0_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_D0_PIN_RESISTOR         OFF
#define PortConf_D0_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_D1_PIN_NUM              0x15
#define PortConf_D1_PIN_DIR              PORT_PIN_IN
#define PortConf_D1_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_D1_PIN_MODE             0x00
#define PortConf_D1_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_D1_PIN_RESISTOR         OFF
#define PortConf_D1_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_D2_PIN_NUM              0x16
#define PortConf_D2_PIN_DIR              PORT_PIN_IN
#define PortConf_D2_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_D2_PIN_MODE             0x00
#define PortConf_D2_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_D2_PIN_RESISTOR         OFF
#define PortConf_D2_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_D3_PIN_NUM              0x17
#define PortConf_D3_PIN_DIR              PORT_PIN_IN
#define PortConf_D3_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_D3_PIN_MODE             0x00
#define PortConf_D3_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_D3_PIN_RESISTOR         OFF
#define PortConf_D3_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_D4_PIN_NUM              0x18
#define PortConf_D4_PIN_DIR              PORT_PIN_IN
#define PortConf_D4_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_D4_PIN_MODE             0x00
#define PortConf_D4_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_D4_PIN_RESISTOR         OFF
#define PortConf_D4_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_D5_PIN_NUM              0x19
#define PortConf_D5_PIN_DIR              PORT_PIN_IN
#define PortConf_D5_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_D5_PIN_MODE             0x00
#define PortConf_D5_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_D5_PIN_RESISTOR         OFF
#define PortConf_D5_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_D6_PIN_NUM              0x1A
#define PortConf_D6_PIN_DIR              PORT_PIN_IN
#define PortConf_D6_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_D6_PIN_MODE             0x00
#define PortConf_D6_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_D6_PIN_RESISTOR         OFF
#define PortConf_D6_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_D7_PIN_NUM              0x1B
#define PortConf_D7_PIN_DIR              PORT_PIN_IN
#define PortConf_D7_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_D7_PIN_MODE             0x00
#define PortConf_D7_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_D7_PIN_RESISTOR         OFF
#define PortConf_D7_PIN_INITIAL          PIN_LEVEL_LOW

//********************************************************
//********************************************************

#define PortConf_E_PortNumberOfPortPins  6

#define PortConf_E0_PIN_NUM              0x1C
#define PortConf_E0_PIN_DIR              PORT_PIN_IN
#define PortConf_E0_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_E0_PIN_MODE             0x00
#define PortConf_E0_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_E0_PIN_RESISTOR         OFF
#define PortConf_E0_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_E1_PIN_NUM              0x1D
#define PortConf_E1_PIN_DIR              PORT_PIN_IN
#define PortConf_E1_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_E1_PIN_MODE             0x00
#define PortConf_E1_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_E1_PIN_RESISTOR         OFF
#define PortConf_E1_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_E2_PIN_NUM              0x1E
#define PortConf_E2_PIN_DIR              PORT_PIN_IN
#define PortConf_E2_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_E2_PIN_MODE             0x00
#define PortConf_E2_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_E2_PIN_RESISTOR         OFF
#define PortConf_E2_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_E3_PIN_NUM              0x1F
#define PortConf_E3_PIN_DIR              PORT_PIN_IN
#define PortConf_E3_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_E3_PIN_MODE             0x00
#define PortConf_E3_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_E3_PIN_RESISTOR         OFF
#define PortConf_E3_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_E4_PIN_NUM              0x20
#define PortConf_E4_PIN_DIR              PORT_PIN_IN
#define PortConf_E4_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_E4_PIN_MODE             0x00
#define PortConf_E4_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_E4_PIN_RESISTOR         OFF
#define PortConf_E4_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_E5_PIN_NUM              0x21
#define PortConf_E5_PIN_DIR              PORT_PIN_IN
#define PortConf_E5_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_E5_PIN_MODE             0x00
#define PortConf_E5_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_E5_PIN_RESISTOR         OFF
#define PortConf_E5_PIN_INITIAL          PIN_LEVEL_LOW 

//********************************************************
//********************************************************

#define PortConf_F_PortNumberOfPortPins  5

#define PortConf_F0_PIN_NUM              0x22
#define PortConf_F0_PIN_DIR              PORT_PIN_IN
#define PortConf_F0_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_F0_PIN_MODE             0x00
#define PortConf_F0_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_F0_PIN_RESISTOR         OFF
#define PortConf_F0_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_F1_PIN_NUM              0x23
#define PortConf_F1_PIN_DIR              PORT_PIN_IN
#define PortConf_F1_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_F1_PIN_MODE             0x00
#define PortConf_F1_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_F1_PIN_RESISTOR         OFF
#define PortConf_F1_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_F2_PIN_NUM              0x24
#define PortConf_F2_PIN_DIR              PORT_PIN_IN
#define PortConf_F2_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_F2_PIN_MODE             0x00
#define PortConf_F2_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_F2_PIN_RESISTOR         OFF
#define PortConf_F2_PIN_INITIAL          PIN_LEVEL_LOW

#define PortConf_F3_PIN_NUM              0x25
#define PortConf_F3_PIN_DIR              PORT_PIN_IN
#define PortConf_F3_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_F3_PIN_MODE             0x00
#define PortConf_F3_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_F3_PIN_RESISTOR         OFF
#define PortConf_F3_PIN_INITIAL          PIN_LEVEL_LOW 

#define PortConf_F4_PIN_NUM              0x26
#define PortConf_F4_PIN_DIR              PORT_PIN_IN
#define PortConf_F4_PIN_DIRCHANGE        Direction_Un_Changeable
#define PortConf_F4_PIN_MODE             0x00
#define PortConf_F4_PIN_MODECHANGE       Mode_Is_Un_Changeable 
#define PortConf_F4_PIN_RESISTOR         OFF
#define PortConf_F4_PIN_INITIAL          PIN_LEVEL_LOW


#endif /*Port_Cfg.h*/

/*******************************************************************
 *    // End of File : Port_Cfg.h
 * *****************************************************************/