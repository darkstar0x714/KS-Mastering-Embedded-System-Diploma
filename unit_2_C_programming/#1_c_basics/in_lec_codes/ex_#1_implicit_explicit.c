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
    int x = 5;
    float y = 2.0;
    if (x / y == 2)
    {
        printf("int/float >>> int\n");
    }
    else if (x / y == 2.5)
    {
        printf("int/float >>> float\n");
    }
    return 0;
}