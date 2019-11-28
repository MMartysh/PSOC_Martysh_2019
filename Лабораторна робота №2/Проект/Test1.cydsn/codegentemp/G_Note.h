/*******************************************************************************
* File Name: G_Note.h
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

#if !defined(CY_CLOCK_G_Note_H)
#define CY_CLOCK_G_Note_H

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

void G_Note_Start(void) ;
void G_Note_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void G_Note_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void G_Note_StandbyPower(uint8 state) ;
void G_Note_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 G_Note_GetDividerRegister(void) ;
void G_Note_SetModeRegister(uint8 modeBitMask) ;
void G_Note_ClearModeRegister(uint8 modeBitMask) ;
uint8 G_Note_GetModeRegister(void) ;
void G_Note_SetSourceRegister(uint8 clkSource) ;
uint8 G_Note_GetSourceRegister(void) ;
#if defined(G_Note__CFG3)
void G_Note_SetPhaseRegister(uint8 clkPhase) ;
uint8 G_Note_GetPhaseRegister(void) ;
#endif /* defined(G_Note__CFG3) */

#define G_Note_Enable()                       G_Note_Start()
#define G_Note_Disable()                      G_Note_Stop()
#define G_Note_SetDivider(clkDivider)         G_Note_SetDividerRegister(clkDivider, 1u)
#define G_Note_SetDividerValue(clkDivider)    G_Note_SetDividerRegister((clkDivider) - 1u, 1u)
#define G_Note_SetMode(clkMode)               G_Note_SetModeRegister(clkMode)
#define G_Note_SetSource(clkSource)           G_Note_SetSourceRegister(clkSource)
#if defined(G_Note__CFG3)
#define G_Note_SetPhase(clkPhase)             G_Note_SetPhaseRegister(clkPhase)
#define G_Note_SetPhaseValue(clkPhase)        G_Note_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(G_Note__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define G_Note_CLKEN              (* (reg8 *) G_Note__PM_ACT_CFG)
#define G_Note_CLKEN_PTR          ((reg8 *) G_Note__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define G_Note_CLKSTBY            (* (reg8 *) G_Note__PM_STBY_CFG)
#define G_Note_CLKSTBY_PTR        ((reg8 *) G_Note__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define G_Note_DIV_LSB            (* (reg8 *) G_Note__CFG0)
#define G_Note_DIV_LSB_PTR        ((reg8 *) G_Note__CFG0)
#define G_Note_DIV_PTR            ((reg16 *) G_Note__CFG0)

/* Clock MSB divider configuration register. */
#define G_Note_DIV_MSB            (* (reg8 *) G_Note__CFG1)
#define G_Note_DIV_MSB_PTR        ((reg8 *) G_Note__CFG1)

/* Mode and source configuration register */
#define G_Note_MOD_SRC            (* (reg8 *) G_Note__CFG2)
#define G_Note_MOD_SRC_PTR        ((reg8 *) G_Note__CFG2)

#if defined(G_Note__CFG3)
/* Analog clock phase configuration register */
#define G_Note_PHASE              (* (reg8 *) G_Note__CFG3)
#define G_Note_PHASE_PTR          ((reg8 *) G_Note__CFG3)
#endif /* defined(G_Note__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define G_Note_CLKEN_MASK         G_Note__PM_ACT_MSK
#define G_Note_CLKSTBY_MASK       G_Note__PM_STBY_MSK

/* CFG2 field masks */
#define G_Note_SRC_SEL_MSK        G_Note__CFG2_SRC_SEL_MASK
#define G_Note_MODE_MASK          (~(G_Note_SRC_SEL_MSK))

#if defined(G_Note__CFG3)
/* CFG3 phase mask */
#define G_Note_PHASE_MASK         G_Note__CFG3_PHASE_DLY_MASK
#endif /* defined(G_Note__CFG3) */

#endif /* CY_CLOCK_G_Note_H */


/* [] END OF FILE */
