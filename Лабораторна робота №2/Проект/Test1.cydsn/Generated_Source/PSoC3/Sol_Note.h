/*******************************************************************************
* File Name: Sol_Note.h
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

#if !defined(CY_CLOCK_Sol_Note_H)
#define CY_CLOCK_Sol_Note_H

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

void Sol_Note_Start(void) ;
void Sol_Note_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void Sol_Note_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void Sol_Note_StandbyPower(uint8 state) ;
void Sol_Note_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 Sol_Note_GetDividerRegister(void) ;
void Sol_Note_SetModeRegister(uint8 modeBitMask) ;
void Sol_Note_ClearModeRegister(uint8 modeBitMask) ;
uint8 Sol_Note_GetModeRegister(void) ;
void Sol_Note_SetSourceRegister(uint8 clkSource) ;
uint8 Sol_Note_GetSourceRegister(void) ;
#if defined(Sol_Note__CFG3)
void Sol_Note_SetPhaseRegister(uint8 clkPhase) ;
uint8 Sol_Note_GetPhaseRegister(void) ;
#endif /* defined(Sol_Note__CFG3) */

#define Sol_Note_Enable()                       Sol_Note_Start()
#define Sol_Note_Disable()                      Sol_Note_Stop()
#define Sol_Note_SetDivider(clkDivider)         Sol_Note_SetDividerRegister(clkDivider, 1u)
#define Sol_Note_SetDividerValue(clkDivider)    Sol_Note_SetDividerRegister((clkDivider) - 1u, 1u)
#define Sol_Note_SetMode(clkMode)               Sol_Note_SetModeRegister(clkMode)
#define Sol_Note_SetSource(clkSource)           Sol_Note_SetSourceRegister(clkSource)
#if defined(Sol_Note__CFG3)
#define Sol_Note_SetPhase(clkPhase)             Sol_Note_SetPhaseRegister(clkPhase)
#define Sol_Note_SetPhaseValue(clkPhase)        Sol_Note_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(Sol_Note__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define Sol_Note_CLKEN              (* (reg8 *) Sol_Note__PM_ACT_CFG)
#define Sol_Note_CLKEN_PTR          ((reg8 *) Sol_Note__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define Sol_Note_CLKSTBY            (* (reg8 *) Sol_Note__PM_STBY_CFG)
#define Sol_Note_CLKSTBY_PTR        ((reg8 *) Sol_Note__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define Sol_Note_DIV_LSB            (* (reg8 *) Sol_Note__CFG0)
#define Sol_Note_DIV_LSB_PTR        ((reg8 *) Sol_Note__CFG0)
#define Sol_Note_DIV_PTR            ((reg16 *) Sol_Note__CFG0)

/* Clock MSB divider configuration register. */
#define Sol_Note_DIV_MSB            (* (reg8 *) Sol_Note__CFG1)
#define Sol_Note_DIV_MSB_PTR        ((reg8 *) Sol_Note__CFG1)

/* Mode and source configuration register */
#define Sol_Note_MOD_SRC            (* (reg8 *) Sol_Note__CFG2)
#define Sol_Note_MOD_SRC_PTR        ((reg8 *) Sol_Note__CFG2)

#if defined(Sol_Note__CFG3)
/* Analog clock phase configuration register */
#define Sol_Note_PHASE              (* (reg8 *) Sol_Note__CFG3)
#define Sol_Note_PHASE_PTR          ((reg8 *) Sol_Note__CFG3)
#endif /* defined(Sol_Note__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define Sol_Note_CLKEN_MASK         Sol_Note__PM_ACT_MSK
#define Sol_Note_CLKSTBY_MASK       Sol_Note__PM_STBY_MSK

/* CFG2 field masks */
#define Sol_Note_SRC_SEL_MSK        Sol_Note__CFG2_SRC_SEL_MASK
#define Sol_Note_MODE_MASK          (~(Sol_Note_SRC_SEL_MSK))

#if defined(Sol_Note__CFG3)
/* CFG3 phase mask */
#define Sol_Note_PHASE_MASK         Sol_Note__CFG3_PHASE_DLY_MASK
#endif /* defined(Sol_Note__CFG3) */

#endif /* CY_CLOCK_Sol_Note_H */


/* [] END OF FILE */
