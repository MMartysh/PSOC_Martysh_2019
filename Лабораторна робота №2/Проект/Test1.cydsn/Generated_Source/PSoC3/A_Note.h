/*******************************************************************************
* File Name: A_Note.h
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

#if !defined(CY_CLOCK_A_Note_H)
#define CY_CLOCK_A_Note_H

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

void A_Note_Start(void) ;
void A_Note_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void A_Note_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void A_Note_StandbyPower(uint8 state) ;
void A_Note_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 A_Note_GetDividerRegister(void) ;
void A_Note_SetModeRegister(uint8 modeBitMask) ;
void A_Note_ClearModeRegister(uint8 modeBitMask) ;
uint8 A_Note_GetModeRegister(void) ;
void A_Note_SetSourceRegister(uint8 clkSource) ;
uint8 A_Note_GetSourceRegister(void) ;
#if defined(A_Note__CFG3)
void A_Note_SetPhaseRegister(uint8 clkPhase) ;
uint8 A_Note_GetPhaseRegister(void) ;
#endif /* defined(A_Note__CFG3) */

#define A_Note_Enable()                       A_Note_Start()
#define A_Note_Disable()                      A_Note_Stop()
#define A_Note_SetDivider(clkDivider)         A_Note_SetDividerRegister(clkDivider, 1u)
#define A_Note_SetDividerValue(clkDivider)    A_Note_SetDividerRegister((clkDivider) - 1u, 1u)
#define A_Note_SetMode(clkMode)               A_Note_SetModeRegister(clkMode)
#define A_Note_SetSource(clkSource)           A_Note_SetSourceRegister(clkSource)
#if defined(A_Note__CFG3)
#define A_Note_SetPhase(clkPhase)             A_Note_SetPhaseRegister(clkPhase)
#define A_Note_SetPhaseValue(clkPhase)        A_Note_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(A_Note__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define A_Note_CLKEN              (* (reg8 *) A_Note__PM_ACT_CFG)
#define A_Note_CLKEN_PTR          ((reg8 *) A_Note__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define A_Note_CLKSTBY            (* (reg8 *) A_Note__PM_STBY_CFG)
#define A_Note_CLKSTBY_PTR        ((reg8 *) A_Note__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define A_Note_DIV_LSB            (* (reg8 *) A_Note__CFG0)
#define A_Note_DIV_LSB_PTR        ((reg8 *) A_Note__CFG0)
#define A_Note_DIV_PTR            ((reg16 *) A_Note__CFG0)

/* Clock MSB divider configuration register. */
#define A_Note_DIV_MSB            (* (reg8 *) A_Note__CFG1)
#define A_Note_DIV_MSB_PTR        ((reg8 *) A_Note__CFG1)

/* Mode and source configuration register */
#define A_Note_MOD_SRC            (* (reg8 *) A_Note__CFG2)
#define A_Note_MOD_SRC_PTR        ((reg8 *) A_Note__CFG2)

#if defined(A_Note__CFG3)
/* Analog clock phase configuration register */
#define A_Note_PHASE              (* (reg8 *) A_Note__CFG3)
#define A_Note_PHASE_PTR          ((reg8 *) A_Note__CFG3)
#endif /* defined(A_Note__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define A_Note_CLKEN_MASK         A_Note__PM_ACT_MSK
#define A_Note_CLKSTBY_MASK       A_Note__PM_STBY_MSK

/* CFG2 field masks */
#define A_Note_SRC_SEL_MSK        A_Note__CFG2_SRC_SEL_MASK
#define A_Note_MODE_MASK          (~(A_Note_SRC_SEL_MSK))

#if defined(A_Note__CFG3)
/* CFG3 phase mask */
#define A_Note_PHASE_MASK         A_Note__CFG3_PHASE_DLY_MASK
#endif /* defined(A_Note__CFG3) */

#endif /* CY_CLOCK_A_Note_H */


/* [] END OF FILE */
