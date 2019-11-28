/*******************************************************************************
* File Name: Si_Note.h
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

#if !defined(CY_CLOCK_Si_Note_H)
#define CY_CLOCK_Si_Note_H

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

void Si_Note_Start(void) ;
void Si_Note_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void Si_Note_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void Si_Note_StandbyPower(uint8 state) ;
void Si_Note_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 Si_Note_GetDividerRegister(void) ;
void Si_Note_SetModeRegister(uint8 modeBitMask) ;
void Si_Note_ClearModeRegister(uint8 modeBitMask) ;
uint8 Si_Note_GetModeRegister(void) ;
void Si_Note_SetSourceRegister(uint8 clkSource) ;
uint8 Si_Note_GetSourceRegister(void) ;
#if defined(Si_Note__CFG3)
void Si_Note_SetPhaseRegister(uint8 clkPhase) ;
uint8 Si_Note_GetPhaseRegister(void) ;
#endif /* defined(Si_Note__CFG3) */

#define Si_Note_Enable()                       Si_Note_Start()
#define Si_Note_Disable()                      Si_Note_Stop()
#define Si_Note_SetDivider(clkDivider)         Si_Note_SetDividerRegister(clkDivider, 1u)
#define Si_Note_SetDividerValue(clkDivider)    Si_Note_SetDividerRegister((clkDivider) - 1u, 1u)
#define Si_Note_SetMode(clkMode)               Si_Note_SetModeRegister(clkMode)
#define Si_Note_SetSource(clkSource)           Si_Note_SetSourceRegister(clkSource)
#if defined(Si_Note__CFG3)
#define Si_Note_SetPhase(clkPhase)             Si_Note_SetPhaseRegister(clkPhase)
#define Si_Note_SetPhaseValue(clkPhase)        Si_Note_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(Si_Note__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define Si_Note_CLKEN              (* (reg8 *) Si_Note__PM_ACT_CFG)
#define Si_Note_CLKEN_PTR          ((reg8 *) Si_Note__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define Si_Note_CLKSTBY            (* (reg8 *) Si_Note__PM_STBY_CFG)
#define Si_Note_CLKSTBY_PTR        ((reg8 *) Si_Note__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define Si_Note_DIV_LSB            (* (reg8 *) Si_Note__CFG0)
#define Si_Note_DIV_LSB_PTR        ((reg8 *) Si_Note__CFG0)
#define Si_Note_DIV_PTR            ((reg16 *) Si_Note__CFG0)

/* Clock MSB divider configuration register. */
#define Si_Note_DIV_MSB            (* (reg8 *) Si_Note__CFG1)
#define Si_Note_DIV_MSB_PTR        ((reg8 *) Si_Note__CFG1)

/* Mode and source configuration register */
#define Si_Note_MOD_SRC            (* (reg8 *) Si_Note__CFG2)
#define Si_Note_MOD_SRC_PTR        ((reg8 *) Si_Note__CFG2)

#if defined(Si_Note__CFG3)
/* Analog clock phase configuration register */
#define Si_Note_PHASE              (* (reg8 *) Si_Note__CFG3)
#define Si_Note_PHASE_PTR          ((reg8 *) Si_Note__CFG3)
#endif /* defined(Si_Note__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define Si_Note_CLKEN_MASK         Si_Note__PM_ACT_MSK
#define Si_Note_CLKSTBY_MASK       Si_Note__PM_STBY_MSK

/* CFG2 field masks */
#define Si_Note_SRC_SEL_MSK        Si_Note__CFG2_SRC_SEL_MASK
#define Si_Note_MODE_MASK          (~(Si_Note_SRC_SEL_MSK))

#if defined(Si_Note__CFG3)
/* CFG3 phase mask */
#define Si_Note_PHASE_MASK         Si_Note__CFG3_PHASE_DLY_MASK
#endif /* defined(Si_Note__CFG3) */

#endif /* CY_CLOCK_Si_Note_H */


/* [] END OF FILE */
