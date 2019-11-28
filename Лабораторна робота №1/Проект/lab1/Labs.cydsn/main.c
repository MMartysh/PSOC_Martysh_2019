/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

void DrawGun(uint8 y, uint8 x)
{
    LCD_Char_MN_Position(y, x);
    LCD_Char_MN_PutChar(LCD_Char_MN_CUSTOM_0);
    
    LCD_Char_MN_Position(y,x+1);
    LCD_Char_MN_PutChar(LCD_Char_MN_CUSTOM_1);
    
    LCD_Char_MN_Position(y,x+2);
    LCD_Char_MN_PutChar(LCD_Char_MN_CUSTOM_2);
    
    LCD_Char_MN_Position(y,x+3);
    LCD_Char_MN_PutChar(LCD_Char_MN_CUSTOM_3);
}

void DrawBall(uint8 y, uint8 x)
{
    LCD_Char_MN_Position(y,x);
    LCD_Char_MN_PutChar(LCD_Char_MN_CUSTOM_4);
    
    LCD_Char_MN_Position(y,x+1);
    LCD_Char_MN_PutChar(LCD_Char_MN_CUSTOM_5);
    
    LCD_Char_MN_Position(y,x+2);
    LCD_Char_MN_PutChar(LCD_Char_MN_CUSTOM_6);
    
    LCD_Char_MN_Position(y,x+3);
    LCD_Char_MN_PutChar(LCD_Char_MN_CUSTOM_7);
}

int main(void)
{
    uint8 iter = 0u;
    LCD_Char_MN_Start();
    for(;;)
    {
        CyDelay(1200u);
        LCD_Char_MN_ClearDisplay();
        
        if(iter == 3u)
        {
        DrawGun(1u,5u);
        DrawBall(1u,8u);
        iter = 0u;
        continue;
        }
        if(iter == 2u)
        {
            DrawGun(0u, 4u);
            DrawBall(0u,8u);
            iter += 1u;
            continue;
        }
        if(iter == 1u)
        {
            DrawGun(1u,0u);
            DrawBall(1u,12u);
            iter += 1u;
            continue;
        }
        if(iter == 0u)
        {
            DrawGun(0u,0u);
            DrawBall(0u,12u);
            iter += 1u;
            continue;
        }
        
        
    }
    
}


/* [] END OF FILE */
