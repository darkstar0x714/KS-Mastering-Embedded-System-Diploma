/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-07 13:43:29
 * @ Known as: DarkStar0x714
 * @ Description: clear specific bit in binary number
 */

#include <stdio.h>

int main()
{
    int number, bitPosition;

    printf("Input Number = ");
    scanf("%d", &number);

    printf("bit position = ");
    scanf("%d", &bitPosition);

    number &= ~(1 << bitPosition);

    printf("result = %d", number);
}
