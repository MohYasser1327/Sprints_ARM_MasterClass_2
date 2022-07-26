/*****************************************************************
 *  FILE DISCRIPTION
 * --------------------------------------------------------------*/
/**         \file Std_Types.h
 *         Module: Common - Platform
 * 
 *      Description: General type definitions
 *  
 *        Author:Mohamed Yasser
 * 
 * ****************************************************************/

#ifndef STD_TYPES_H
#define STD_TYPES_H
/*******************************************************************
 * Includes
 * *****************************************************************/
#include "Compiler.h"

/*******************************************************************
 * Global Constant Macros
 * *****************************************************************/

/*******************************************************************
 * Global Functions Macros
 * *****************************************************************/

/*******************************************************************
 * Global Data Types and Structures
 * *****************************************************************/
/*
 *  Describes the standard Return Type Definitions used in the project
 */
typedef uint8  Std_ReturnType;

#define STD_HIGH        0x01U       /* Standard HIGH */
#define STD_LOW         0x00U       /* Standard LOW */

#define STD_ACTIVE      0x01U       /* Logical state active */
#define STD_IDLE        0x00U       /* Logical state idle */

#define STD_ON          0x01U       /* Standard ON */
#define STD_OFF         0x00U       /* Standard OFF */

#define E_OK            ((Std_ReturnType)0x00U)      /* Function Return OK */
#define E_NOT_OK        ((Std_ReturnType)0x01U)      /* Function Return NOT OK */

 
 /* Register type width */
  
#define CPU_TYPE_8                                  (8U)
#define CPU_TYPE_16                                 (16U)
#define CPU_TYPE_32                                 (32U)

/*
 * Bit order definition
 */
#define MSB_FIRST                   (0u)        /* Big endian bit ordering        */
#define LSB_FIRST                   (1u)        /* Little endian bit ordering     */

/*
 * Byte order definition
 */
#define HIGH_BYTE_FIRST             (0u)        /* Big endian byte ordering       */
#define LOW_BYTE_FIRST              (1u)        /* Little endian byte ordering    */

/*
 * Platform type and endianess definitions, specific for ARM Cortex-M4F
 */
#define CPU_TYPE            CPU_TYPE_32

#define CPU_BIT_ORDER       LSB_FIRST
#define CPU_BYTE_ORDER      LOW_BYTE_FIRST

/*
 * Boolean Values
 */
#ifndef FALSE
#define FALSE       (0u)
#endif
#ifndef TRUE
#define TRUE        (1u)
#endif

typedef unsigned char         boolean;

typedef unsigned char         uint8;          /*           0 .. 255             */
typedef signed char           sint8;          /*        -128 .. +127            */
typedef unsigned short        uint16;         /*           0 .. 65535           */
typedef signed short          sint16;         /*      -32768 .. +32767          */
typedef unsigned long         uint32;         /*           0 .. 4294967295      */
typedef signed long           sint32;         /* -2147483648 .. +2147483647     */
typedef unsigned long long    uint64;         /*       0..18446744073709551615  */
typedef signed long long      sint64;
typedef float                 float32;
typedef double                float64;


#endif /*Std_Types.h*/

/*******************************************************************
 *    // End of File : Std_Types.h
 * *****************************************************************/