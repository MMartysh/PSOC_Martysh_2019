/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* Pin_1 */
#define Pin_1__0__INTTYPE CYREG_PICU1_INTTYPE7
#define Pin_1__0__MASK 0x80u
#define Pin_1__0__PC CYREG_PRT1_PC7
#define Pin_1__0__PORT 1u
#define Pin_1__0__SHIFT 7u
#define Pin_1__AG CYREG_PRT1_AG
#define Pin_1__AMUX CYREG_PRT1_AMUX
#define Pin_1__BIE CYREG_PRT1_BIE
#define Pin_1__BIT_MASK CYREG_PRT1_BIT_MASK
#define Pin_1__BYP CYREG_PRT1_BYP
#define Pin_1__CTL CYREG_PRT1_CTL
#define Pin_1__DM0 CYREG_PRT1_DM0
#define Pin_1__DM1 CYREG_PRT1_DM1
#define Pin_1__DM2 CYREG_PRT1_DM2
#define Pin_1__DR CYREG_PRT1_DR
#define Pin_1__INP_DIS CYREG_PRT1_INP_DIS
#define Pin_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU1_BASE
#define Pin_1__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define Pin_1__LCD_EN CYREG_PRT1_LCD_EN
#define Pin_1__MASK 0x80u
#define Pin_1__PORT 1u
#define Pin_1__PRT CYREG_PRT1_PRT
#define Pin_1__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define Pin_1__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define Pin_1__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define Pin_1__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define Pin_1__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define Pin_1__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define Pin_1__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define Pin_1__PS CYREG_PRT1_PS
#define Pin_1__SHIFT 7u
#define Pin_1__SLW CYREG_PRT1_SLW

/* A_Note */
#define A_Note__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define A_Note__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define A_Note__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define A_Note__CFG2_SRC_SEL_MASK 0x07u
#define A_Note__INDEX 0x01u
#define A_Note__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define A_Note__PM_ACT_MSK 0x02u
#define A_Note__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define A_Note__PM_STBY_MSK 0x02u

/* Buzzer */
#define Buzzer__0__INTTYPE CYREG_PICU1_INTTYPE6
#define Buzzer__0__MASK 0x40u
#define Buzzer__0__PC CYREG_PRT1_PC6
#define Buzzer__0__PORT 1u
#define Buzzer__0__SHIFT 6u
#define Buzzer__AG CYREG_PRT1_AG
#define Buzzer__AMUX CYREG_PRT1_AMUX
#define Buzzer__BIE CYREG_PRT1_BIE
#define Buzzer__BIT_MASK CYREG_PRT1_BIT_MASK
#define Buzzer__BYP CYREG_PRT1_BYP
#define Buzzer__CTL CYREG_PRT1_CTL
#define Buzzer__DM0 CYREG_PRT1_DM0
#define Buzzer__DM1 CYREG_PRT1_DM1
#define Buzzer__DM2 CYREG_PRT1_DM2
#define Buzzer__DR CYREG_PRT1_DR
#define Buzzer__INP_DIS CYREG_PRT1_INP_DIS
#define Buzzer__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU1_BASE
#define Buzzer__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define Buzzer__LCD_EN CYREG_PRT1_LCD_EN
#define Buzzer__MASK 0x40u
#define Buzzer__PORT 1u
#define Buzzer__PRT CYREG_PRT1_PRT
#define Buzzer__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define Buzzer__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define Buzzer__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define Buzzer__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define Buzzer__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define Buzzer__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define Buzzer__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define Buzzer__PS CYREG_PRT1_PS
#define Buzzer__SHIFT 6u
#define Buzzer__SLW CYREG_PRT1_SLW

/* C_Note */
#define C_Note__CFG0 CYREG_CLKDIST_DCFG6_CFG0
#define C_Note__CFG1 CYREG_CLKDIST_DCFG6_CFG1
#define C_Note__CFG2 CYREG_CLKDIST_DCFG6_CFG2
#define C_Note__CFG2_SRC_SEL_MASK 0x07u
#define C_Note__INDEX 0x06u
#define C_Note__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define C_Note__PM_ACT_MSK 0x40u
#define C_Note__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define C_Note__PM_STBY_MSK 0x40u

/* D_Note */
#define D_Note__CFG0 CYREG_CLKDIST_DCFG5_CFG0
#define D_Note__CFG1 CYREG_CLKDIST_DCFG5_CFG1
#define D_Note__CFG2 CYREG_CLKDIST_DCFG5_CFG2
#define D_Note__CFG2_SRC_SEL_MASK 0x07u
#define D_Note__INDEX 0x05u
#define D_Note__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define D_Note__PM_ACT_MSK 0x20u
#define D_Note__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define D_Note__PM_STBY_MSK 0x20u

/* E_Note */
#define E_Note__CFG0 CYREG_CLKDIST_DCFG4_CFG0
#define E_Note__CFG1 CYREG_CLKDIST_DCFG4_CFG1
#define E_Note__CFG2 CYREG_CLKDIST_DCFG4_CFG2
#define E_Note__CFG2_SRC_SEL_MASK 0x07u
#define E_Note__INDEX 0x04u
#define E_Note__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define E_Note__PM_ACT_MSK 0x10u
#define E_Note__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define E_Note__PM_STBY_MSK 0x10u

/* F_Note */
#define F_Note__CFG0 CYREG_CLKDIST_DCFG3_CFG0
#define F_Note__CFG1 CYREG_CLKDIST_DCFG3_CFG1
#define F_Note__CFG2 CYREG_CLKDIST_DCFG3_CFG2
#define F_Note__CFG2_SRC_SEL_MASK 0x07u
#define F_Note__INDEX 0x03u
#define F_Note__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define F_Note__PM_ACT_MSK 0x08u
#define F_Note__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define F_Note__PM_STBY_MSK 0x08u

/* G_Note */
#define G_Note__CFG0 CYREG_CLKDIST_DCFG2_CFG0
#define G_Note__CFG1 CYREG_CLKDIST_DCFG2_CFG1
#define G_Note__CFG2 CYREG_CLKDIST_DCFG2_CFG2
#define G_Note__CFG2_SRC_SEL_MASK 0x07u
#define G_Note__INDEX 0x02u
#define G_Note__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define G_Note__PM_ACT_MSK 0x04u
#define G_Note__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define G_Note__PM_STBY_MSK 0x04u

/* H_Note */
#define H_Note__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define H_Note__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define H_Note__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define H_Note__CFG2_SRC_SEL_MASK 0x07u
#define H_Note__INDEX 0x00u
#define H_Note__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define H_Note__PM_ACT_MSK 0x01u
#define H_Note__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define H_Note__PM_STBY_MSK 0x01u

/* Tempo_Clock */
#define Tempo_Clock__CFG0 CYREG_CLKDIST_DCFG7_CFG0
#define Tempo_Clock__CFG1 CYREG_CLKDIST_DCFG7_CFG1
#define Tempo_Clock__CFG2 CYREG_CLKDIST_DCFG7_CFG2
#define Tempo_Clock__CFG2_SRC_SEL_MASK 0x07u
#define Tempo_Clock__INDEX 0x07u
#define Tempo_Clock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define Tempo_Clock__PM_ACT_MSK 0x80u
#define Tempo_Clock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define Tempo_Clock__PM_STBY_MSK 0x80u

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "Test1"
#define CY_VERSION "PSoC Creator  4.2"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 18u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC3
#define CYDEV_CHIP_JTAG_ID 0x1E028069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 18u
#define CYDEV_CHIP_MEMBER_4D 13u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 19u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 17u
#define CYDEV_CHIP_MEMBER_4I 23u
#define CYDEV_CHIP_MEMBER_4J 14u
#define CYDEV_CHIP_MEMBER_4K 15u
#define CYDEV_CHIP_MEMBER_4L 22u
#define CYDEV_CHIP_MEMBER_4M 21u
#define CYDEV_CHIP_MEMBER_4N 10u
#define CYDEV_CHIP_MEMBER_4O 7u
#define CYDEV_CHIP_MEMBER_4P 20u
#define CYDEV_CHIP_MEMBER_4Q 12u
#define CYDEV_CHIP_MEMBER_4R 8u
#define CYDEV_CHIP_MEMBER_4S 11u
#define CYDEV_CHIP_MEMBER_4T 9u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 16u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 24u
#define CYDEV_CHIP_MEMBER_FM3 28u
#define CYDEV_CHIP_MEMBER_FM4 29u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 26u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 27u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_3A
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_3A_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_CLEAR_SRAM 1
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x01u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000000u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_DP8051_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
