/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-06 14:13:46
 * @ Known as: DarkStar0x714
 * @ Description: simple code to send data to be sent using uart from ARM VersatilePB board
 */

#include "uart.h"

// define a register address of uart0 data register
#define UART0DR *((volatile unsigned int *const)((unsigned int *)0x101f1000))

void Uart_Send_string(unsigned char *P_tx_string)
{
    while (*P_tx_string != '\0')
    {
        UART0DR = (unsigned int)(*P_tx_string); // transmit a char
        P_tx_string++;                          // get next char
    }
}