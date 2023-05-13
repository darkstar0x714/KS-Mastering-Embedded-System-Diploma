/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-05-06 14:13:46
 * @ Known as: DarkStar0x714
 * @ Description: simple app to print "learn-in-depth:<Amir>" using uart0 on ARM VersatilePB board
 */

#include "uart.h"

unsigned char string_buffer[100] = "learn-in-depth:<Amir>";
void main(void)
{
    Uart_Send_string(string_buffer);
}