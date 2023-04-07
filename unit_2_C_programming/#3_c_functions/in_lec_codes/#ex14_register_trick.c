/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-07 03:32:42
 * @ Known as: DarkStar0x714
 * @ Description:
 */

#include <stdio.h>

int main()
{
    register int a; // initial value is Garbage;
    printf("%d", a);
    // printf("%d", &a); // this line will lead to error due to you asked for memory address of var but var is located in processor
}