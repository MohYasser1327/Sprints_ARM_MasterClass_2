/*****************************************************************
 *  FILE DISCRIPTION
 * --------------------------------------------------------------*/
/**         \file Mcu_Hw.h
 *         Module: Mcu Hardware
 * 
 *      Description: Includes all Registers and Its Memory Locations
 *               
 * 
 * ****************************************************************/

#ifndef MCU_HW_H
#define MCU_HW_H
/*******************************************************************
 *                            Includes
 * *****************************************************************/
#include "Std_Types.h"
/*******************************************************************
 *                 Global Data Types and Structures
 * *****************************************************************/


/*******************************************************************
 *                     Global Constant Macros
 * *****************************************************************/
 /* Function for generating code for getting a register. Left hand side of
 * assignment only. 
 */
#define GET_REG(addr) (*((volatile int32_t *)(addr)))

/*******************************************************************
 *      Cortex-M4 Peripheral Registers Definitions
 * *****************************************************************/
/** 
 * From Table 3-8. Peripherals Register Map on p. 134 of the TM4C Datasheet for
 * more details.
 */
#define PERIPHERALS_BASE    0xE000E000
#define NVIC_EN0_OFFSET     0x100
#define NVIC_EN1_OFFSET     0x104
#define NVIC_EN2_OFFSET     0x108
#define NVIC_EN3_OFFSET     0x10C
#define NVIC_EN4_OFFSET     0x110
#define NVIC_PRI0_OFFSET    0x400
#define NVIC_PRI1_OFFSET    0x404
#define NVIC_PRI2_OFFSET    0x408
#define NVIC_PRI3_OFFSET    0x40C
#define NVIC_PRI4_OFFSET    0x410
#define NVIC_PRI5_OFFSET    0x414
#define NVIC_PRI6_OFFSET    0x418
#define NVIC_PRI7_OFFSET    0x41C
#define NVIC_PRI8_OFFSET    0x420
#define NVIC_PRI9_OFFSET    0x424
#define NVIC_PRI10_OFFSET   0x428
#define NVIC_PRI11_OFFSET   0x42C
#define NVIC_PRI12_OFFSET   0x430
#define NVIC_PRI13_OFFSET   0x434
#define NVIC_PRI14_OFFSET   0x438
#define NVIC_PRI15_OFFSET   0x43C
#define NVIC_PRI16_OFFSET   0x440
#define NVIC_PRI17_OFFSET   0x444
#define NVIC_PRI18_OFFSET   0x448
#define NVIC_PRI19_OFFSET   0x44C
#define NVIC_PRI20_OFFSET   0x450
#define NVIC_PRI21_OFFSET   0x454
#define NVIC_PRI22_OFFSET   0x458
#define NVIC_PRI23_OFFSET   0x45C
#define NVIC_PRI24_OFFSET   0x460
#define NVIC_PRI25_OFFSET   0x464
#define NVIC_PRI26_OFFSET   0x468
#define NVIC_PRI27_OFFSET   0x46C
#define NVIC_PRI28_OFFSET   0x470
#define NVIC_PRI29_OFFSET   0x474
#define NVIC_PRI30_OFFSET   0x478
#define NVIC_PRI31_OFFSET   0x47C
#define NVIC_PRI32_OFFSET   0x480
#define NVIC_PRI33_OFFSET   0x484
#define NVIC_PRI34_OFFSET   0x488
#define SYSTICK_CTRL_OFFSET 0x010
#define SYSTICK_LOAD_OFFSET 0x014
#define SYSTICK_CURR_OFFSET 0x018
#define SYS_PRI3_OFFSET     0xD20
#define NVIC_CFGCTRL_OFFSET 0xD14
#define NVIC_INTCTRL_OFFSET 0xD04


/**
 * See Table 5-8. System Control Register Map on p. 232 of the TM4C Datasheet
 * for more details.
 */
#define SYSCTL_BASE                 0x400FE000
#define SYSCTL_RIS_OFFSET           0x050
#define SYSCTL_RCC_OFFSET           0x060
#define SYSCTL_RCC2_OFFSET          0x070
#define SYSCTL_RCGCTIMER_OFFSET     0x604
#define SYSCTL_RCGCGPIO_OFFSET      0x608
#define SYSCTL_RCGCUART_OFFSET      0x618
#define SYSCTL_RCGCSSI_OFFSET       0x61C
#define SYSCTL_RCGCI2C_OFFSET       0x620
#define SYSCTL_RCGCUSB_OFFSET       0x628
#define SYSCTL_RCGCADC_OFFSET       0x638
#define SYSCTL_RCGCPWM_OFFSET       0x640
#define SYSCTL_RCGCWTIMER_OFFSET    0x65C
#define SYSCTL_PRTIMER_OFFSET       0xA04
#define SYSCTL_PRGPIO_OFFSET        0xA08
#define SYSCTL_PRUART_OFFSET        0xA18
#define SYSCTL_PRSSI_OFFSET         0xA1C
#define SYSCTL_PRI2C_OFFSET         0xA20
#define SYSCTL_PRUSB_OFFSET         0xA28
#define SYSCTL_PRADC_OFFSET         0xA38
#define SYSCTL_PRPWM_OFFSET         0xA40
#define SYSCTL_PRWTIMER_OFFSET      0xA5C

/** 
 * See Table 10-6. GPIO Register Map on p. 660 of the TM4C Datasheet for more
 * details. 
 */
#define GPIO_PORTA_APB_BASE      0x40004000
#define GPIO_PORTB_APB_BASE      0x40005000
#define GPIO_PORTC_APB_BASE      0x40006000
#define GPIO_PORTD_APB_BASE      0x40007000
#define GPIO_PORTE_APB_BASE      0x40024000
#define GPIO_PORTF_APB_BASE      0x40025000

#define GPIO_PORTA_AHB_BASE      0x40058000
#define GPIO_PORTB_AHB_BASE      0x40059000
#define GPIO_PORTC_AHB_BASE      0x4005A000
#define GPIO_PORTD_AHB_BASE      0x4005B000
#define GPIO_PORTE_AHB_BASE      0x4005C000
#define GPIO_PORTF_AHB_BASE      0x4005D000

#define GPIO_LOCK_KEY       0x4C4F434B
#define GPIO_DATA_OFFSET    0x000
#define GPIO_DIR_OFFSET     0x400
#define GPIO_IS_OFFSET      0x404
#define GPIO_IBE_OFFSET     0x408
#define GPIO_IEV_OFFSET     0x40C
#define GPIO_IM_OFFSET      0x410
#define GPIO_RIS_OFFSET     0x414
#define GPIO_MIS_OFFSET     0x418
#define GPIO_ICR_OFFSET     0x41C
#define GPIO_AFSEL_OFFSET   0x420
#define GPIO_DR2R_OFFSET    0x500
#define GPIO_DR4R_OFFSET    0x504
#define GPIO_DR8R_OFFSET    0x508
#define GPIO_ODR_OFFSET     0x50C
#define GPIO_PUR_OFFSET     0x510
#define GPIO_PDR_OFFSET     0x514
#define GPIO_SLR_OFFSET     0x518
#define GPIO_DEN_OFFSET     0x51C
#define GPIO_LOCK_OFFSET    0x520
#define GPIO_CR_OFFSET      0x524
#define GPIO_AMSEL_OFFSET   0x528
#define GPIO_PCTL_OFFSET    0x52C
#define GPIO_ADCCTL_OFFSET  0x530
#define GPIO_DMACTL_OFFSET  0x534

/**
 * See Table 11-12. Timers Register Map on p. 726 of the TM4C Datasheet for
 * more details.
 */
#define GPTM_BASE           0x40030000
#define GPTMCFG_OFFSET      0x000
#define GPTMTAMR_OFFSET     0x004
#define GPTMTBMR_OFFSET     0x008
#define GPTMCTL_OFFSET      0x00C
#define GPTMSYNC_OFFSET     0x010
#define GPTMIMR_OFFSET      0x018
#define GPTMRIS_OFFSET      0x01C
#define GPTMMIS_OFFSET      0x020
#define GPTMICR_OFFSET      0x024
#define GPTMTAILR_OFFSET    0x028
#define GPTMTBILR_OFFSET    0x02C
#define GPTMTAMATCHR_OFFSET 0x030
#define GPTMTBMATCHR_OFFSET 0x034
#define GPTMTAPR_OFFSET     0x038
#define GPTMTBPR_OFFSET     0x03C
#define GPTMTAPMR_OFFSET    0x040
#define GPTMTBPMR_OFFSET    0x044
#define GPTMTAR_OFFSET      0x048
#define GPTMTBR_OFFSET      0x04C
#define GPTMTAV_OFFSET      0x050
#define GPTMTBV_OFFSET      0x054
#define GPTMRTCPD_OFFSET    0x058
#define GPTMTAPS_OFFSET     0x05C
#define GPTMTBPS_OFFSET     0x060
#define GPTMTAPV_OFFSET     0x064
#define GPTMTBPV_OFFSET     0x068
#define GPTMPP_OFFSET       0xFC0

/**
 * See table 20-2. PWM Register Map on p. 1240 of the TM4C Datasheet for more
 * details.
 */
#define PWM0_BASE           0x40028000
#define PWM1_BASE           0x40029000
#define PWM_OFFSET          0x040
#define PWM_ENABLE_OFFSET   0x008
#define PWM_CTL_OFFSET      0x040
#define PWM_LOAD_OFFSET     0x050
#define PWM_CMPA_OFFSET     0x058
#define PWM_CMPB_OFFSET     0x05C
#define PWM_GENA_OFFSET     0x060
#define PWM_GENB_OFFSET     0x064

 
/*******************************************************************
 *                       Global Functions Macros
 * *****************************************************************/


/*******************************************************************
 *                           Global Data Prototypes
 * *****************************************************************/


#endif /*  Mcu_Hw.h */

/*******************************************************************
 *    // End of File : Mcu_Hw.h
 * *****************************************************************/