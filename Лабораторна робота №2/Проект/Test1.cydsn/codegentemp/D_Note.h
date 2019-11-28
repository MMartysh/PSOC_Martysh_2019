/*******************************************************************************
* File Name: D_Note.h
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

#if !defined(CY_CLOCK_D_Note_H)
#define CY_CLOCK_D_Note_H

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

void D_Note_Start(void) ;
void D_Note_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void D_Note_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void D_Note_StandbyPower(uint8 state) ;
void D_Note_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 D_Note_GetDividerRegister(void) ;
void D_Note_SetModeRegister(uint8 modeBitMask) ;
void D_Note_ClearModeRegister(uint8 modeBitMask) ;
uint8 D_Note_GetModeRegister(void) ;
void D_Note_SetSourceRegister(uint8 clkSource) ;
uint8 D_Note_GetSourceRegister(void) ;
#if defined(D_Note__CFG3)
void D_Note_SetPhaseRegister(uint8 clkPhase) ;
uint8 D_Note_GetPhaseRegister(void) ;
#endif /* defined(D_Note__CFG3) */

#define D_Note_Enable()                       D_Note_Start()
#define D_Note_Disable()                      D_Note_Stop()
#define D_Note_SetDivider(clkDivider)         D_Note_SetDividerRegister(clkDivider, 1u)
#define D_Note_SetDividerValue(clkDivider)    D_Note_SetDividerRegister((clkDivider) - 1u, 1u)
#define D_Note_SetMode(clkMode)               D_Note_SetModeRegister(clkMode)
#define D_Note_SetSource(clkSource)           D_Note_SetSourceRegister(clkSource)
#if defined(D_Note__CFG3)
#define D_Note_SetPhase(clkPhase)             D_Note_SetPhaseRegister(clkPhase)
#define D_Note_SetPhaseValue(clkPhase)        D_Note_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(D_Note__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define D_Note_CLKEN              (* (reg8 *) D_Note__PM_ACT_CFG)
#define D_Note_CLKEN_PTR          ((reg8 *) D_Note__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define D_Note_CLKSTBY            (* (reg8 *) D_Note__PM_STBY_CFG)
#define D_Note_CLKSTBY_PTR        ((reg8 *) D_Note__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define D_Note_DIV_LSB            (* (reg8 *) D_Note__CFG0)
#define D_Note_DIV_LSB_PTR        ((reg8 *) D_Note__CFG0)
#define D_Note_DIV_PTR            ((reg16 *) D_Note__CFG0)

/* Clock MSB divider configuration register. */
#define D_Note_DIV_MSB            (* (reg8 *) D_Note__CFG1)
#define D_Note_DIV_MSB_PTR        ((reg8 *) D_Note__CFG1)

/* Mode and source configuration register */
#define D_Note_MOD_SRC            (* (reg8 *) D_Note__CFG2)
#define D_Note_MOD_SRC_PTR        ((reg8 *) D_Note__CFG2)

#if defined(D_Note__CFG3)
/* Analog clock phase configuration register */
#define D_Note_PHASE              (* (reg8 *) D_Note__CFG3)
#define D_Note_PHASE_PTR          ((reg8 *) D_Note__CFG3)
#endif /* defined(D_Note__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define D_Note_CLKEN_MASK         D_Note__PM_ACT_MSK
#define D_Note_CLKSTBY_MASK       D_Note__PM_STBY_MSK

/* CFG2 field masks */
#define D_Note_SRC_SEL_MSK        D_Note__CFG2_SRC_SEL_MASK
#define D_Note_MODE_MASK          (~(D_Note_SRC_SEL_MSK))

#if defined(D_Note__CFG3)
/* CFG3 phase mask */
#define D_Note_PHASE_MASK         D_Note__CFG3_PHASE_DLY_MASK
#endif /* defined(D_Note__CFG3) */

#endif /* CY_CLOCK_D_Note_H */


/* [] END OF FILE */
