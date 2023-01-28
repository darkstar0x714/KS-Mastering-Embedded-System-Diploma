/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2022-11-18 14:41:47
 * @ Known as: DarkStar0x714
 * @ Description: simple program to explain standard input/output in c
 */

#include <stdio.h>

int main()
{
    int integer;
    printf("enter an integer: ");
    fflush(stdout);        // for clear buffer in some compilers
    scanf("%d", &integer); // see format specifier in link : https://www.programiz.com/c-programming/c-input-output
    printf("Number = %d", integer);
    return 0;
}