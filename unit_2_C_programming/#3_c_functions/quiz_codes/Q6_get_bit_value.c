/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-07 13:55:59
 * @ Known as: DarkStar0x714
 * @ Description: get specific bit in binary number
 */

#include <stdio.h>

int main()
{
    int number, bitState;

    scanf("%d", &number);

    bitState = (number >> 3) & 1; // 3 is 4th bit in 0 counting system

    printf("bit state is = %d", bitState);
}