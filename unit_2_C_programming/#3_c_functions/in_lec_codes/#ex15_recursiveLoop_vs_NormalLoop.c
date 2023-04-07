/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-07 16:38:36
 * @ Known as: DarkStar0x714
 * @ Description: example to show differance between normal loop and recursive one
 */

/******************Normal loop***************

#include <stdio.h>

void printHello()
{
    printf("hello\r\n");
}

void main()
{
    while (1)
    {
        printHello();
    }
}
*/

/******************recursive loop***************

#include <stdio.h>

void printHello()
{
    printf("hello\r\n");
    printHello();
}

void main()
{
        printHello();
}
*/

/*
 * in two examples will be infinite loop but :
 * in recursive function each call will creat new stack space till stack overflow and program crash
 * in normal loop stack storage did't increase but each iterate the same variables changed
 */