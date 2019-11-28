/*******************************************************************************
* File Name: Test_LCDPort.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Test_LCDPort_H) /* Pins Test_LCDPort_H */
#define CY_PINS_Test_LCDPort_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Test_LCDPort_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Test_LCDPort_Write(uint8 value) ;
void    Test_LCDPort_SetDriveMode(uint8 mode) ;
uint8   Test_LCDPort_ReadDataReg(void) ;
uint8   Test_LCDPort_Read(void) ;
void    Test_LCDPort_SetInterruptMode(uint16 position, uint16 mode) ;
uint8   Test_LCDPort_ClearInterrupt(void) ;
/** @} general */

/***************************************
*           API Constants        
***************************************/

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Test_LCDPort_SetDriveMode() function.
     *  @{
     */
        /* Drive Modes */
        #define Test_LCDPort_DM_ALG_HIZ         PIN_DM_ALG_HIZ   /**< \brief High Impedance Analog   */
        #define Test_LCDPort_DM_DIG_HIZ         PIN_DM_DIG_HIZ   /**< \brief High Impedance Digital  */
        #define Test_LCDPort_DM_RES_UP          PIN_DM_RES_UP    /**< \brief Resistive Pull Up       */
        #define Test_LCDPort_DM_RES_DWN         PIN_DM_RES_DWN   /**< \brief Resistive Pull Down     */
        #define Test_LCDPort_DM_OD_LO           PIN_DM_OD_LO     /**< \brief Open Drain, Drives Low  */
        #define Test_LCDPort_DM_OD_HI           PIN_DM_OD_HI     /**< \brief Open Drain, Drives High */
        #define Test_LCDPort_DM_STRONG          PIN_DM_STRONG    /**< \brief Strong Drive            */
        #define Test_LCDPort_DM_RES_UPDWN       PIN_DM_RES_UPDWN /**< \brief Resistive Pull Up/Down  */
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Test_LCDPort_MASK               Test_LCDPort__MASK
#define Test_LCDPort_SHIFT              Test_LCDPort__SHIFT
#define Test_LCDPort_WIDTH              7u

/* Interrupt constants */
#if defined(Test_LCDPort__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Test_LCDPort_SetInterruptMode() function.
     *  @{
     */
        #define Test_LCDPort_INTR_NONE      (uint16)(0x0000u)   /**< \brief Disabled             */
        #define Test_LCDPort_INTR_RISING    (uint16)(0x0001u)   /**< \brief Rising edge trigger  */
        #define Test_LCDPort_INTR_FALLING   (uint16)(0x0002u)   /**< \brief Falling edge trigger */
        #define Test_LCDPort_INTR_BOTH      (uint16)(0x0003u)   /**< \brief Both edge trigger    */
        /** @} intrMode */
/** @} group_constants */

    #define Test_LCDPort_INTR_MASK      (0x01u)
#endif /* (Test_LCDPort__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Test_LCDPort_PS                     (* (reg8 *) Test_LCDPort__PS)
/* Data Register */
#define Test_LCDPort_DR                     (* (reg8 *) Test_LCDPort__DR)
/* Port Number */
#define Test_LCDPort_PRT_NUM                (* (reg8 *) Test_LCDPort__PRT) 
/* Connect to Analog Globals */                                                  
#define Test_LCDPort_AG                     (* (reg8 *) Test_LCDPort__AG)                       
/* Analog MUX bux enable */
#define Test_LCDPort_AMUX                   (* (reg8 *) Test_LCDPort__AMUX) 
/* Bidirectional Enable */                                                        
#define Test_LCDPort_BIE                    (* (reg8 *) Test_LCDPort__BIE)
/* Bit-mask for Aliased Register Access */
#define Test_LCDPort_BIT_MASK               (* (reg8 *) Test_LCDPort__BIT_MASK)
/* Bypass Enable */
#define Test_LCDPort_BYP                    (* (reg8 *) Test_LCDPort__BYP)
/* Port wide control signals */                                                   
#define Test_LCDPort_CTL                    (* (reg8 *) Test_LCDPort__CTL)
/* Drive Modes */
#define Test_LCDPort_DM0                    (* (reg8 *) Test_LCDPort__DM0) 
#define Test_LCDPort_DM1                    (* (reg8 *) Test_LCDPort__DM1)
#define Test_LCDPort_DM2                    (* (reg8 *) Test_LCDPort__DM2) 
/* Input Buffer Disable Override */
#define Test_LCDPort_INP_DIS                (* (reg8 *) Test_LCDPort__INP_DIS)
/* LCD Common or Segment Drive */
#define Test_LCDPort_LCD_COM_SEG            (* (reg8 *) Test_LCDPort__LCD_COM_SEG)
/* Enable Segment LCD */
#define Test_LCDPort_LCD_EN                 (* (reg8 *) Test_LCDPort__LCD_EN)
/* Slew Rate Control */
#define Test_LCDPort_SLW                    (* (reg8 *) Test_LCDPort__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Test_LCDPort_PRTDSI__CAPS_SEL       (* (reg8 *) Test_LCDPort__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Test_LCDPort_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Test_LCDPort__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Test_LCDPort_PRTDSI__OE_SEL0        (* (reg8 *) Test_LCDPort__PRTDSI__OE_SEL0) 
#define Test_LCDPort_PRTDSI__OE_SEL1        (* (reg8 *) Test_LCDPort__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Test_LCDPort_PRTDSI__OUT_SEL0       (* (reg8 *) Test_LCDPort__PRTDSI__OUT_SEL0) 
#define Test_LCDPort_PRTDSI__OUT_SEL1       (* (reg8 *) Test_LCDPort__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Test_LCDPort_PRTDSI__SYNC_OUT       (* (reg8 *) Test_LCDPort__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Test_LCDPort__SIO_CFG)
    #define Test_LCDPort_SIO_HYST_EN        (* (reg8 *) Test_LCDPort__SIO_HYST_EN)
    #define Test_LCDPort_SIO_REG_HIFREQ     (* (reg8 *) Test_LCDPort__SIO_REG_HIFREQ)
    #define Test_LCDPort_SIO_CFG            (* (reg8 *) Test_LCDPort__SIO_CFG)
    #define Test_LCDPort_SIO_DIFF           (* (reg8 *) Test_LCDPort__SIO_DIFF)
#endif /* (Test_LCDPort__SIO_CFG) */

/* Interrupt Registers */
#if defined(Test_LCDPort__INTSTAT)
    #define Test_LCDPort_INTSTAT             (* (reg8 *) Test_LCDPort__INTSTAT)
    #define Test_LCDPort_SNAP                (* (reg8 *) Test_LCDPort__SNAP)
    
	#define Test_LCDPort_0_INTTYPE_REG 		(* (reg8 *) Test_LCDPort__0__INTTYPE)
	#define Test_LCDPort_1_INTTYPE_REG 		(* (reg8 *) Test_LCDPort__1__INTTYPE)
	#define Test_LCDPort_2_INTTYPE_REG 		(* (reg8 *) Test_LCDPort__2__INTTYPE)
	#define Test_LCDPort_3_INTTYPE_REG 		(* (reg8 *) Test_LCDPort__3__INTTYPE)
	#define Test_LCDPort_4_INTTYPE_REG 		(* (reg8 *) Test_LCDPort__4__INTTYPE)
	#define Test_LCDPort_5_INTTYPE_REG 		(* (reg8 *) Test_LCDPort__5__INTTYPE)
	#define Test_LCDPort_6_INTTYPE_REG 		(* (reg8 *) Test_LCDPort__6__INTTYPE)
#endif /* (Test_LCDPort__INTSTAT) */

#endif /* End Pins Test_LCDPort_H */


/* [] END OF FILE */
