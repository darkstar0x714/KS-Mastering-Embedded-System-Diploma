/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2022-11-18 05:33:59
 * @ Known as: DarkStar0x714
 * @ Modified time: 2022-11-18 05:42:01
 * @ Description: code to show implicit casting in c
 */

#include <stdio.h>
int main()
{
    int x = 10;   // integer x
    char y = 'a'; // character c

    // y implicitly converted to int. ASCII
    // value of 'a' is 97
    x = x + y;

    // x is implicitly converted to float
    float z = x + 1.0;

    printf("x = %d, z = %f", x, z);
    return 0;
}
