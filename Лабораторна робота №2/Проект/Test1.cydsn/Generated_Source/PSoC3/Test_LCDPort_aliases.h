/*******************************************************************************
* File Name: Test_LCDPort.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Test_LCDPort_ALIASES_H) /* Pins Test_LCDPort_ALIASES_H */
#define CY_PINS_Test_LCDPort_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Test_LCDPort_0			(Test_LCDPort__0__PC)
#define Test_LCDPort_0_INTR	((uint16)((uint16)0x0001u << Test_LCDPort__0__SHIFT))

#define Test_LCDPort_1			(Test_LCDPort__1__PC)
#define Test_LCDPort_1_INTR	((uint16)((uint16)0x0001u << Test_LCDPort__1__SHIFT))

#define Test_LCDPort_2			(Test_LCDPort__2__PC)
#define Test_LCDPort_2_INTR	((uint16)((uint16)0x0001u << Test_LCDPort__2__SHIFT))

#define Test_LCDPort_3			(Test_LCDPort__3__PC)
#define Test_LCDPort_3_INTR	((uint16)((uint16)0x0001u << Test_LCDPort__3__SHIFT))

#define Test_LCDPort_4			(Test_LCDPort__4__PC)
#define Test_LCDPort_4_INTR	((uint16)((uint16)0x0001u << Test_LCDPort__4__SHIFT))

#define Test_LCDPort_5			(Test_LCDPort__5__PC)
#define Test_LCDPort_5_INTR	((uint16)((uint16)0x0001u << Test_LCDPort__5__SHIFT))

#define Test_LCDPort_6			(Test_LCDPort__6__PC)
#define Test_LCDPort_6_INTR	((uint16)((uint16)0x0001u << Test_LCDPort__6__SHIFT))

#define Test_LCDPort_INTR_ALL	 ((uint16)(Test_LCDPort_0_INTR| Test_LCDPort_1_INTR| Test_LCDPort_2_INTR| Test_LCDPort_3_INTR| Test_LCDPort_4_INTR| Test_LCDPort_5_INTR| Test_LCDPort_6_INTR))

#endif /* End Pins Test_LCDPort_ALIASES_H */


/* [] END OF FILE */
