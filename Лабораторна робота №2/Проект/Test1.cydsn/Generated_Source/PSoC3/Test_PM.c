/*******************************************************************************
* File Name: Test_PM.c
* Version 2.20
*
* Description:
*  This file provides the API source code for the Static Segment LCD component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "Test.h"


static Test_BACKUP_STRUCT Test_backup;


/*******************************************************************************
* Function Name: Test_SaveConfig
********************************************************************************
*
* Summary:
*  Does nothing, provided for consistency.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void Test_SaveConfig(void) 
{
}


/*******************************************************************************
* Function Name: Test_RestoreConfig
********************************************************************************
*
* Summary:
*  Does nothing, provided for consistency.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void Test_RestoreConfig(void) 
{
}


/*******************************************************************************
* Function Name: Test_Sleep
********************************************************************************
*
* Summary:
*  Prepares the component for entering the sleep mode.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void Test_Sleep(void) 
{
    Test_backup.enableState = Test_enableState;
    Test_SaveConfig();
    Test_Stop();
}


/*******************************************************************************
* Function Name: Test_Wakeup
********************************************************************************
*
* Summary:
*  Wakes the component from sleep mode. Configures DMA and enables the component
*  for normal operation.
*
* Parameters:
*  Test_enableState - Global variable.
*
* Return:
*  Status one of standard status for PSoC3 Component
*       CYRET_SUCCESS - Function completed successfully.
*       CYRET_LOCKED - The object was locked, already in use. Some of TDs or
*                      a channel already in use.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void Test_Wakeup(void) 
{
    Test_RestoreConfig();

    if(Test_backup.enableState == 1u)
    {
        Test_Enable();
    }
}


/* [] END OF FILE */
