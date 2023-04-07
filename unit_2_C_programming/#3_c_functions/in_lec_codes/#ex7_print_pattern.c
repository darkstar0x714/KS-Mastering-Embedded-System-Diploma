/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-05 22:54:46
 * @ Known as: DarkStar0x714
 * @ Description: print reverse triangle using function
 */

#include <stdio.h>

void printLine(int startNum)
{
    for (int i = startNum; i < 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

void main()
{

    for (int i = 0; i < 10; i++)
    {
        printLine(i);
    }
}