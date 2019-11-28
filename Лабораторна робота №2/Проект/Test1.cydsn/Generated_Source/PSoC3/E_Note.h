/*******************************************************************************
* File Name: E_Note.h
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

#if !defined(CY_CLOCK_E_Note_H)
#define CY_CLOCK_E_Note_H

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

void E_Note_Start(void) ;
void E_Note_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void E_Note_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void E_Note_StandbyPower(uint8 state) ;
void E_Note_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 E_Note_GetDividerRegister(void) ;
void E_Note_SetModeRegister(uint8 modeBitMask) ;
void E_Note_ClearModeRegister(uint8 modeBitMask) ;
uint8 E_Note_GetModeRegister(void) ;
void E_Note_SetSourceRegister(uint8 clkSource) ;
uint8 E_Note_GetSourceRegister(void) ;
#if defined(E_Note__CFG3)
void E_Note_SetPhaseRegister(uint8 clkPhase) ;
uint8 E_Note_GetPhaseRegister(void) ;
#endif /* defined(E_Note__CFG3) */

#define E_Note_Enable()                       E_Note_Start()
#define E_Note_Disable()                      E_Note_Stop()
#define E_Note_SetDivider(clkDivider)         E_Note_SetDividerRegister(clkDivider, 1u)
#define E_Note_SetDividerValue(clkDivider)    E_Note_SetDividerRegister((clkDivider) - 1u, 1u)
#define E_Note_SetMode(clkMode)               E_Note_SetModeRegister(clkMode)
#define E_Note_SetSource(clkSource)           E_Note_SetSourceRegister(clkSource)
#if defined(E_Note__CFG3)
#define E_Note_SetPhase(clkPhase)             E_Note_SetPhaseRegister(clkPhase)
#define E_Note_SetPhaseValue(clkPhase)        E_Note_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(E_Note__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define E_Note_CLKEN              (* (reg8 *) E_Note__PM_ACT_CFG)
#define E_Note_CLKEN_PTR          ((reg8 *) E_Note__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define E_Note_CLKSTBY            (* (reg8 *) E_Note__PM_STBY_CFG)
#define E_Note_CLKSTBY_PTR        ((reg8 *) E_Note__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define E_Note_DIV_LSB            (* (reg8 *) E_Note__CFG0)
#define E_Note_DIV_LSB_PTR        ((reg8 *) E_Note__CFG0)
#define E_Note_DIV_PTR            ((reg16 *) E_Note__CFG0)

/* Clock MSB divider configuration register. */
#define E_Note_DIV_MSB            (* (reg8 *) E_Note__CFG1)
#define E_Note_DIV_MSB_PTR        ((reg8 *) E_Note__CFG1)

/* Mode and source configuration register */
#define E_Note_MOD_SRC            (* (reg8 *) E_Note__CFG2)
#define E_Note_MOD_SRC_PTR        ((reg8 *) E_Note__CFG2)

#if defined(E_Note__CFG3)
/* Analog clock phase configuration register */
#define E_Note_PHASE              (* (reg8 *) E_Note__CFG3)
#define E_Note_PHASE_PTR          ((reg8 *) E_Note__CFG3)
#endif /* defined(E_Note__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define E_Note_CLKEN_MASK         E_Note__PM_ACT_MSK
#define E_Note_CLKSTBY_MASK       E_Note__PM_STBY_MSK

/* CFG2 field masks */
#define E_Note_SRC_SEL_MSK        E_Note__CFG2_SRC_SEL_MASK
#define E_Note_MODE_MASK          (~(E_Note_SRC_SEL_MSK))

#if defined(E_Note__CFG3)
/* CFG3 phase mask */
#define E_Note_PHASE_MASK         E_Note__CFG3_PHASE_DLY_MASK
#endif /* defined(E_Note__CFG3) */

#endif /* CY_CLOCK_E_Note_H */


/* [] END OF FILE */
