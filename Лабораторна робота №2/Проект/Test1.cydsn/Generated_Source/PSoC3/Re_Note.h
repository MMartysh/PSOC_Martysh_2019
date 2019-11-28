/*******************************************************************************
* File Name: Re_Note.h
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

#if !defined(CY_CLOCK_Re_Note_H)
#define CY_CLOCK_Re_Note_H

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

void Re_Note_Start(void) ;
void Re_Note_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void Re_Note_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void Re_Note_StandbyPower(uint8 state) ;
void Re_Note_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 Re_Note_GetDividerRegister(void) ;
void Re_Note_SetModeRegister(uint8 modeBitMask) ;
void Re_Note_ClearModeRegister(uint8 modeBitMask) ;
uint8 Re_Note_GetModeRegister(void) ;
void Re_Note_SetSourceRegister(uint8 clkSource) ;
uint8 Re_Note_GetSourceRegister(void) ;
#if defined(Re_Note__CFG3)
void Re_Note_SetPhaseRegister(uint8 clkPhase) ;
uint8 Re_Note_GetPhaseRegister(void) ;
#endif /* defined(Re_Note__CFG3) */

#define Re_Note_Enable()                       Re_Note_Start()
#define Re_Note_Disable()                      Re_Note_Stop()
#define Re_Note_SetDivider(clkDivider)         Re_Note_SetDividerRegister(clkDivider, 1u)
#define Re_Note_SetDividerValue(clkDivider)    Re_Note_SetDividerRegister((clkDivider) - 1u, 1u)
#define Re_Note_SetMode(clkMode)               Re_Note_SetModeRegister(clkMode)
#define Re_Note_SetSource(clkSource)           Re_Note_SetSourceRegister(clkSource)
#if defined(Re_Note__CFG3)
#define Re_Note_SetPhase(clkPhase)             Re_Note_SetPhaseRegister(clkPhase)
#define Re_Note_SetPhaseValue(clkPhase)        Re_Note_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(Re_Note__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define Re_Note_CLKEN              (* (reg8 *) Re_Note__PM_ACT_CFG)
#define Re_Note_CLKEN_PTR          ((reg8 *) Re_Note__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define Re_Note_CLKSTBY            (* (reg8 *) Re_Note__PM_STBY_CFG)
#define Re_Note_CLKSTBY_PTR        ((reg8 *) Re_Note__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define Re_Note_DIV_LSB            (* (reg8 *) Re_Note__CFG0)
#define Re_Note_DIV_LSB_PTR        ((reg8 *) Re_Note__CFG0)
#define Re_Note_DIV_PTR            ((reg16 *) Re_Note__CFG0)

/* Clock MSB divider configuration register. */
#define Re_Note_DIV_MSB            (* (reg8 *) Re_Note__CFG1)
#define Re_Note_DIV_MSB_PTR        ((reg8 *) Re_Note__CFG1)

/* Mode and source configuration register */
#define Re_Note_MOD_SRC            (* (reg8 *) Re_Note__CFG2)
#define Re_Note_MOD_SRC_PTR        ((reg8 *) Re_Note__CFG2)

#if defined(Re_Note__CFG3)
/* Analog clock phase configuration register */
#define Re_Note_PHASE              (* (reg8 *) Re_Note__CFG3)
#define Re_Note_PHASE_PTR          ((reg8 *) Re_Note__CFG3)
#endif /* defined(Re_Note__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define Re_Note_CLKEN_MASK         Re_Note__PM_ACT_MSK
#define Re_Note_CLKSTBY_MASK       Re_Note__PM_STBY_MSK

/* CFG2 field masks */
#define Re_Note_SRC_SEL_MSK        Re_Note__CFG2_SRC_SEL_MASK
#define Re_Note_MODE_MASK          (~(Re_Note_SRC_SEL_MSK))

#if defined(Re_Note__CFG3)
/* CFG3 phase mask */
#define Re_Note_PHASE_MASK         Re_Note__CFG3_PHASE_DLY_MASK
#endif /* defined(Re_Note__CFG3) */

#endif /* CY_CLOCK_Re_Note_H */


/* [] END OF FILE */
