/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2022-11-18 05:33:59
 * @ Known as: DarkStar0x714
 * @ Modified time: 2022-11-18 05:42:01
 * @ Description: code to show explicit casting in c
 */

#include <stdio.h>

int main()
{
    double x = 1.2;

    // Explicit conversion from double to int
    int sum = (int)x + 1;

    printf("sum = %d", sum);

    return 0;
}
