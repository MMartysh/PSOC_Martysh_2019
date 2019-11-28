/*******************************************************************************
* File Name: Do_Note.h
* Version 2.20
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_Do_Note_H)
#define CY_CLOCK_Do_Note_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
* Conditional Compilation Parameters
***************************************/

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component cy_clock_v2_20 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5LP) */


/***************************************
*        Function Prototypes
***************************************/

void Do_Note_Start(void) ;
void Do_Note_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void Do_Note_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void Do_Note_StandbyPower(uint8 state) ;
void Do_Note_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 Do_Note_GetDividerRegister(void) ;
void Do_Note_SetModeRegister(uint8 modeBitMask) ;
void Do_Note_ClearModeRegister(uint8 modeBitMask) ;
uint8 Do_Note_GetModeRegister(void) ;
void Do_Note_SetSourceRegister(uint8 clkSource) ;
uint8 Do_Note_GetSourceRegister(void) ;
#if defined(Do_Note__CFG3)
void Do_Note_SetPhaseRegister(uint8 clkPhase) ;
uint8 Do_Note_GetPhaseRegister(void) ;
#endif /* defined(Do_Note__CFG3) */

#define Do_Note_Enable()                       Do_Note_Start()
#define Do_Note_Disable()                      Do_Note_Stop()
#define Do_Note_SetDivider(clkDivider)         Do_Note_SetDividerRegister(clkDivider, 1u)
#define Do_Note_SetDividerValue(clkDivider)    Do_Note_SetDividerRegister((clkDivider) - 1u, 1u)
#define Do_Note_SetMode(clkMode)               Do_Note_SetModeRegister(clkMode)
#define Do_Note_SetSource(clkSource)           Do_Note_SetSourceRegister(clkSource)
#if defined(Do_Note__CFG3)
#define Do_Note_SetPhase(clkPhase)             Do_Note_SetPhaseRegister(clkPhase)
#define Do_Note_SetPhaseValue(clkPhase)        Do_Note_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(Do_Note__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define Do_Note_CLKEN              (* (reg8 *) Do_Note__PM_ACT_CFG)
#define Do_Note_CLKEN_PTR          ((reg8 *) Do_Note__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define Do_Note_CLKSTBY            (* (reg8 *) Do_Note__PM_STBY_CFG)
#define Do_Note_CLKSTBY_PTR        ((reg8 *) Do_Note__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define Do_Note_DIV_LSB            (* (reg8 *) Do_Note__CFG0)
#define Do_Note_DIV_LSB_PTR        ((reg8 *) Do_Note__CFG0)
#define Do_Note_DIV_PTR            ((reg16 *) Do_Note__CFG0)

/* Clock MSB divider configuration register. */
#define Do_Note_DIV_MSB            (* (reg8 *) Do_Note__CFG1)
#define Do_Note_DIV_MSB_PTR        ((reg8 *) Do_Note__CFG1)

/* Mode and source configuration register */
#define Do_Note_MOD_SRC            (* (reg8 *) Do_Note__CFG2)
#define Do_Note_MOD_SRC_PTR        ((reg8 *) Do_Note__CFG2)

#if defined(Do_Note__CFG3)
/* Analog clock phase configuration register */
#define Do_Note_PHASE              (* (reg8 *) Do_Note__CFG3)
#define Do_Note_PHASE_PTR          ((reg8 *) Do_Note__CFG3)
#endif /* defined(Do_Note__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define Do_Note_CLKEN_MASK         Do_Note__PM_ACT_MSK
#define Do_Note_CLKSTBY_MASK       Do_Note__PM_STBY_MSK

/* CFG2 field masks */
#define Do_Note_SRC_SEL_MSK        Do_Note__CFG2_SRC_SEL_MASK
#define Do_Note_MODE_MASK          (~(Do_Note_SRC_SEL_MSK))

#if defined(Do_Note__CFG3)
/* CFG3 phase mask */
#define Do_Note_PHASE_MASK         Do_Note__CFG3_PHASE_DLY_MASK
#endif /* defined(Do_Note__CFG3) */

#endif /* CY_CLOCK_Do_Note_H */


/* [] END OF FILE */
