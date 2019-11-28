/*******************************************************************************
* File Name: Music.h  
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

#if !defined(CY_PINS_Music_H) /* Pins Music_H */
#define CY_PINS_Music_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Music_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Music_Write(uint8 value) ;
void    Music_SetDriveMode(uint8 mode) ;
uint8   Music_ReadDataReg(void) ;
uint8   Music_Read(void) ;
void    Music_SetInterruptMode(uint16 position, uint16 mode) ;
uint8   Music_ClearInterrupt(void) ;
/** @} general */

/***************************************
*           API Constants        
***************************************/

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Music_SetDriveMode() function.
     *  @{
     */
        /* Drive Modes */
        #define Music_DM_ALG_HIZ         PIN_DM_ALG_HIZ   /**< \brief High Impedance Analog   */
        #define Music_DM_DIG_HIZ         PIN_DM_DIG_HIZ   /**< \brief High Impedance Digital  */
        #define Music_DM_RES_UP          PIN_DM_RES_UP    /**< \brief Resistive Pull Up       */
        #define Music_DM_RES_DWN         PIN_DM_RES_DWN   /**< \brief Resistive Pull Down     */
        #define Music_DM_OD_LO           PIN_DM_OD_LO     /**< \brief Open Drain, Drives Low  */
        #define Music_DM_OD_HI           PIN_DM_OD_HI     /**< \brief Open Drain, Drives High */
        #define Music_DM_STRONG          PIN_DM_STRONG    /**< \brief Strong Drive            */
        #define Music_DM_RES_UPDWN       PIN_DM_RES_UPDWN /**< \brief Resistive Pull Up/Down  */
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Music_MASK               Music__MASK
#define Music_SHIFT              Music__SHIFT
#define Music_WIDTH              1u

/* Interrupt constants */
#if defined(Music__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Music_SetInterruptMode() function.
     *  @{
     */
        #define Music_INTR_NONE      (uint16)(0x0000u)   /**< \brief Disabled             */
        #define Music_INTR_RISING    (uint16)(0x0001u)   /**< \brief Rising edge trigger  */
        #define Music_INTR_FALLING   (uint16)(0x0002u)   /**< \brief Falling edge trigger */
        #define Music_INTR_BOTH      (uint16)(0x0003u)   /**< \brief Both edge trigger    */
        /** @} intrMode */
/** @} group_constants */

    #define Music_INTR_MASK      (0x01u)
#endif /* (Music__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Music_PS                     (* (reg8 *) Music__PS)
/* Data Register */
#define Music_DR                     (* (reg8 *) Music__DR)
/* Port Number */
#define Music_PRT_NUM                (* (reg8 *) Music__PRT) 
/* Connect to Analog Globals */                                                  
#define Music_AG                     (* (reg8 *) Music__AG)                       
/* Analog MUX bux enable */
#define Music_AMUX                   (* (reg8 *) Music__AMUX) 
/* Bidirectional Enable */                                                        
#define Music_BIE                    (* (reg8 *) Music__BIE)
/* Bit-mask for Aliased Register Access */
#define Music_BIT_MASK               (* (reg8 *) Music__BIT_MASK)
/* Bypass Enable */
#define Music_BYP                    (* (reg8 *) Music__BYP)
/* Port wide control signals */                                                   
#define Music_CTL                    (* (reg8 *) Music__CTL)
/* Drive Modes */
#define Music_DM0                    (* (reg8 *) Music__DM0) 
#define Music_DM1                    (* (reg8 *) Music__DM1)
#define Music_DM2                    (* (reg8 *) Music__DM2) 
/* Input Buffer Disable Override */
#define Music_INP_DIS                (* (reg8 *) Music__INP_DIS)
/* LCD Common or Segment Drive */
#define Music_LCD_COM_SEG            (* (reg8 *) Music__LCD_COM_SEG)
/* Enable Segment LCD */
#define Music_LCD_EN                 (* (reg8 *) Music__LCD_EN)
/* Slew Rate Control */
#define Music_SLW                    (* (reg8 *) Music__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Music_PRTDSI__CAPS_SEL       (* (reg8 *) Music__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Music_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Music__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Music_PRTDSI__OE_SEL0        (* (reg8 *) Music__PRTDSI__OE_SEL0) 
#define Music_PRTDSI__OE_SEL1        (* (reg8 *) Music__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Music_PRTDSI__OUT_SEL0       (* (reg8 *) Music__PRTDSI__OUT_SEL0) 
#define Music_PRTDSI__OUT_SEL1       (* (reg8 *) Music__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Music_PRTDSI__SYNC_OUT       (* (reg8 *) Music__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Music__SIO_CFG)
    #define Music_SIO_HYST_EN        (* (reg8 *) Music__SIO_HYST_EN)
    #define Music_SIO_REG_HIFREQ     (* (reg8 *) Music__SIO_REG_HIFREQ)
    #define Music_SIO_CFG            (* (reg8 *) Music__SIO_CFG)
    #define Music_SIO_DIFF           (* (reg8 *) Music__SIO_DIFF)
#endif /* (Music__SIO_CFG) */

/* Interrupt Registers */
#if defined(Music__INTSTAT)
    #define Music_INTSTAT             (* (reg8 *) Music__INTSTAT)
    #define Music_SNAP                (* (reg8 *) Music__SNAP)
    
	#define Music_0_INTTYPE_REG 		(* (reg8 *) Music__0__INTTYPE)
#endif /* (Music__INTSTAT) */

#endif /* End Pins Music_H */


/* [] END OF FILE */
