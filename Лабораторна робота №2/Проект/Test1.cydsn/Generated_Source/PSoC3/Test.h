/*******************************************************************************
* File Name: Test.h
* Version 2.20
*
* Description:
*  This header file contains registers and constants associated with the
*  Character LCD component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CHARLCD_Test_H)
#define CY_CHARLCD_Test_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*   Conditional Compilation Parameters
***************************************/

#define Test_CONVERSION_ROUTINES     (1u)
#define Test_CUSTOM_CHAR_SET         (0u)

/* Custom character set types */
#define Test_NONE                     (0u)    /* No Custom Fonts      */
#define Test_HORIZONTAL_BG            (1u)    /* Horizontal Bar Graph */
#define Test_VERTICAL_BG              (2u)    /* Vertical Bar Graph   */
#define Test_USER_DEFINED             (3u)    /* User Defined Fonts   */


/***************************************
*     Data Struct Definitions
***************************************/

/* Sleep Mode API Support */
typedef struct
{
    uint8 enableState;
} Test_BACKUP_STRUCT;


/***************************************
*        Function Prototypes
***************************************/

void Test_Init(void) ;
void Test_Enable(void) ;
void Test_Start(void) ;
void Test_Stop(void) ;
void Test_WriteControl(uint8 cByte) ;
void Test_WriteData(uint8 dByte) ;
void Test_PrintString(char8 const string[]) ;
void Test_Position(uint8 row, uint8 column) ;
void Test_PutChar(char8 character) ;
void Test_IsReady(void) ;
void Test_SaveConfig(void) ;
void Test_RestoreConfig(void) ;
void Test_Sleep(void) ;
void Test_Wakeup(void) ;

#if((Test_CUSTOM_CHAR_SET == Test_VERTICAL_BG) || \
                (Test_CUSTOM_CHAR_SET == Test_HORIZONTAL_BG))

    void  Test_LoadCustomFonts(uint8 const customData[])
                        ;

    void  Test_DrawHorizontalBG(uint8 row, uint8 column, uint8 maxCharacters, uint8 value)
                         ;

    void Test_DrawVerticalBG(uint8 row, uint8 column, uint8 maxCharacters, uint8 value)
                        ;

#endif /* ((Test_CUSTOM_CHAR_SET == Test_VERTICAL_BG) */

#if(Test_CUSTOM_CHAR_SET == Test_USER_DEFINED)

    void Test_LoadCustomFonts(uint8 const customData[])
                            ;

#endif /* ((Test_CUSTOM_CHAR_SET == Test_USER_DEFINED) */

#if(Test_CONVERSION_ROUTINES == 1u)

    /* ASCII Conversion Routines */
    void Test_PrintInt8(uint8 value) ;
    void Test_PrintInt16(uint16 value) ;
    void Test_PrintInt32(uint32 value) ;
    void Test_PrintNumber(uint16 value) ; 
    void Test_PrintU32Number(uint32 value) ;
    
#endif /* Test_CONVERSION_ROUTINES == 1u */

/* Clear Macro */
#define Test_ClearDisplay() Test_WriteControl(Test_CLEAR_DISPLAY)

/* Off Macro */
#define Test_DisplayOff() Test_WriteControl(Test_DISPLAY_CURSOR_OFF)

/* On Macro */
#define Test_DisplayOn() Test_WriteControl(Test_DISPLAY_ON_CURSOR_OFF)

#define Test_PrintNumber(value) Test_PrintU32Number((uint16) (value))


/***************************************
*           Global Variables
***************************************/

extern uint8 Test_initVar;
extern uint8 Test_enableState;
extern uint8 const CYCODE Test_customFonts[64u];


/***************************************
*           API Constants
***************************************/

/* Full Byte Commands Sent as Two Nibbles */
#define Test_DISPLAY_8_BIT_INIT       (0x03u)
#define Test_DISPLAY_4_BIT_INIT       (0x02u)
#define Test_DISPLAY_CURSOR_OFF       (0x08u)
#define Test_CLEAR_DISPLAY            (0x01u)
#define Test_CURSOR_AUTO_INCR_ON      (0x06u)
#define Test_DISPLAY_CURSOR_ON        (0x0Eu)
#define Test_DISPLAY_2_LINES_5x10     (0x2Cu)
#define Test_DISPLAY_ON_CURSOR_OFF    (0x0Cu)

#define Test_RESET_CURSOR_POSITION    (0x03u)
#define Test_CURSOR_WINK              (0x0Du)
#define Test_CURSOR_BLINK             (0x0Fu)
#define Test_CURSOR_SH_LEFT           (0x10u)
#define Test_CURSOR_SH_RIGHT          (0x14u)
#define Test_DISPLAY_SCRL_LEFT        (0x18u)
#define Test_DISPLAY_SCRL_RIGHT       (0x1Eu)
#define Test_CURSOR_HOME              (0x02u)
#define Test_CURSOR_LEFT              (0x04u)
#define Test_CURSOR_RIGHT             (0x06u)

/* Point to Character Generator Ram 0 */
#define Test_CGRAM_0                  (0x40u)

/* Point to Display Data Ram 0 */
#define Test_DDRAM_0                  (0x80u)

/* LCD Characteristics */
#define Test_CHARACTER_WIDTH          (0x05u)
#define Test_CHARACTER_HEIGHT         (0x08u)

#if(Test_CONVERSION_ROUTINES == 1u)
    #define Test_NUMBER_OF_REMAINDERS_U32 (0x0Au)
    #define Test_TEN                      (0x0Au)
    #define Test_8_BIT_SHIFT              (8u)
    #define Test_32_BIT_SHIFT             (32u)
    #define Test_ZERO_CHAR_ASCII          (48u)
#endif /* Test_CONVERSION_ROUTINES == 1u */

/* Nibble Offset and Mask */
#define Test_NIBBLE_SHIFT             (0x04u)
#define Test_NIBBLE_MASK              (0x0Fu)

/* LCD Module Address Constants */
#define Test_ROW_0_START              (0x80u)
#define Test_ROW_1_START              (0xC0u)
#define Test_ROW_2_START              (0x94u)
#define Test_ROW_3_START              (0xD4u)

/* Custom Character References */
#define Test_CUSTOM_0                 (0x00u)
#define Test_CUSTOM_1                 (0x01u)
#define Test_CUSTOM_2                 (0x02u)
#define Test_CUSTOM_3                 (0x03u)
#define Test_CUSTOM_4                 (0x04u)
#define Test_CUSTOM_5                 (0x05u)
#define Test_CUSTOM_6                 (0x06u)
#define Test_CUSTOM_7                 (0x07u)

/* Other constants */
#define Test_BYTE_UPPER_NIBBLE_SHIFT  (0x04u)
#define Test_BYTE_LOWER_NIBBLE_MASK   (0x0Fu)
#define Test_U16_UPPER_BYTE_SHIFT     (0x08u)
#define Test_U16_LOWER_BYTE_MASK      (0xFFu)
#define Test_CUSTOM_CHAR_SET_LEN      (0x40u)

#define Test_LONGEST_CMD_US           (0x651u)
#define Test_WAIT_CYCLE               (0x10u)
#define Test_READY_DELAY              ((Test_LONGEST_CMD_US * 4u)/(Test_WAIT_CYCLE))


/***************************************
*             Registers
***************************************/

/* Device specific registers */
#if (CY_PSOC4)

    #define Test_PORT_DR_REG           (*(reg32 *) Test_LCDPort__DR)  /* Data Output Register */
    #define Test_PORT_DR_PTR           ( (reg32 *) Test_LCDPort__DR)
    #define Test_PORT_PS_REG           (*(reg32 *) Test_LCDPort__PS)  /* Pin State Register */
    #define Test_PORT_PS_PTR           ( (reg32 *) Test_LCDPort__PS)
    
    #define Test_PORT_PC_REG           (*(reg32 *) Test_LCDPort__PC)
    #define Test_PORT_PC_PTR           (*(reg32 *) Test_LCDPort__PC)
    
#else

    #define Test_PORT_DR_REG           (*(reg8 *) Test_LCDPort__DR)  /* Data Output Register */
    #define Test_PORT_DR_PTR           ( (reg8 *) Test_LCDPort__DR)
    #define Test_PORT_PS_REG           (*(reg8 *) Test_LCDPort__PS)  /* Pin State Register */
    #define Test_PORT_PS_PTR           ( (reg8 *) Test_LCDPort__PS)

    #define Test_PORT_DM0_REG          (*(reg8 *) Test_LCDPort__DM0) /* Port Drive Mode 0 */
    #define Test_PORT_DM0_PTR          ( (reg8 *) Test_LCDPort__DM0)
    #define Test_PORT_DM1_REG          (*(reg8 *) Test_LCDPort__DM1) /* Port Drive Mode 1 */
    #define Test_PORT_DM1_PTR          ( (reg8 *) Test_LCDPort__DM1)
    #define Test_PORT_DM2_REG          (*(reg8 *) Test_LCDPort__DM2) /* Port Drive Mode 2 */
    #define Test_PORT_DM2_PTR          ( (reg8 *) Test_LCDPort__DM2)

#endif /* CY_PSOC4 */


/***************************************
*       Register Constants
***************************************/

/* SHIFT must be 1 or 0 */
#if (0 == Test_LCDPort__SHIFT)
    #define Test_PORT_SHIFT               (0x00u)
#else
    #define Test_PORT_SHIFT               (0x01u)
#endif /* (0 == Test_LCDPort__SHIFT) */

#define Test_PORT_MASK                ((uint8) (Test_LCDPort__MASK))

#if (CY_PSOC4)

    #define Test_DM_PIN_STEP              (3u)
    /* Hi-Z Digital is defined by the value of "001b" and this should be set for
    * four data pins, in this way we get - 0x00000249. A similar Strong drive
    * is defined with "110b" so we get 0x00000DB6.
    */
    #define Test_HIGH_Z_DATA_DM           ((0x00000249ul) << (Test_PORT_SHIFT *\
                                                                          Test_DM_PIN_STEP))
    #define Test_STRONG_DATA_DM           ((0x00000DB6ul) << (Test_PORT_SHIFT *\
                                                                          Test_DM_PIN_STEP))
    #define Test_DATA_PINS_MASK           (0x00000FFFul)
    #define Test_DM_DATA_MASK             ((uint32) (Test_DATA_PINS_MASK << \
                                                      (Test_PORT_SHIFT * Test_DM_PIN_STEP)))

#else

    /* Drive Mode register values for High Z */
    #define Test_HIGH_Z_DM0               (0xFFu)
    #define Test_HIGH_Z_DM1               (0x00u)
    #define Test_HIGH_Z_DM2               (0x00u)

    /* Drive Mode register values for High Z Analog */
    #define Test_HIGH_Z_A_DM0             (0x00u)
    #define Test_HIGH_Z_A_DM1             (0x00u)
    #define Test_HIGH_Z_A_DM2             (0x00u)

    /* Drive Mode register values for Strong */
    #define Test_STRONG_DM0               (0x00u)
    #define Test_STRONG_DM1               (0xFFu)
    #define Test_STRONG_DM2               (0xFFu)

#endif /* CY_PSOC4 */

/* Pin Masks */
#define Test_RS                     ((uint8) \
                                                (((uint8) 0x20u) << Test_LCDPort__SHIFT))
#define Test_RW                     ((uint8) \
                                                (((uint8) 0x40u) << Test_LCDPort__SHIFT))
#define Test_E                      ((uint8) \
                                                (((uint8) 0x10u) << Test_LCDPort__SHIFT))
#define Test_READY_BIT              ((uint8) \
                                                (((uint8) 0x08u) << Test_LCDPort__SHIFT))
#define Test_DATA_MASK              ((uint8) \
                                                (((uint8) 0x0Fu) << Test_LCDPort__SHIFT))

/* These names are obsolete and will be removed in future revisions */
#define Test_PORT_DR                  Test_PORT_DR_REG
#define Test_PORT_PS                  Test_PORT_PS_REG
#define Test_PORT_DM0                 Test_PORT_DM0_REG
#define Test_PORT_DM1                 Test_PORT_DM1_REG
#define Test_PORT_DM2                 Test_PORT_DM2_REG


/***************************************
*       Obsolete function names
***************************************/
#if(Test_CONVERSION_ROUTINES == 1u)
    /* This function names are obsolete and will be removed in future 
    * revisions of the component.
    */
    #define Test_PrintDecUint16(x)   Test_PrintNumber(x)  
    #define Test_PrintHexUint8(x)    Test_PrintInt8(x)
    #define Test_PrintHexUint16(x)   Test_PrintInt16(x)        

#endif /* Test_CONVERSION_ROUTINES == 1u */

#endif /* CY_CHARLCD_Test_H */


/* [] END OF FILE */
