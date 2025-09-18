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
CY_ISR( myISR )
{
    Arduino_out1_Write(1);
    CyDelay(100);
    Arduino_out1_Write(0);
}
CY_ISR( myISR1 )
{
    COMout_Write(1);
    CyDelay(100);
    COMout_Write(0);
}
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    Timer_1_Start();
    isr_1_StartEx(myISR);
    Timer_2_Start();
    isr_2_StartEx(myISR1);
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
