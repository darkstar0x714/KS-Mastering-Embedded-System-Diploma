/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-07 02:29:38
 * @ Known as: DarkStar0x714
 * @ Description: example to show local variables
 */

#include <stdio.h>

int myMultiplyFunction(int x, int y)
{
    int z;
    z = x * y;
    return z;
}

int myAddFunction(int x, int y)
{
    int z;
    z = x + y;
    return z;
}

void main()
{
    int a = 5, b = 6;
    printf("a + b = %d\r\n", myAddFunction(a, b));
    printf("a * b = %d\r\n", myMultiplyFunction(a, b));

    /*
     * the program worked fine even if we define same var name many time but on another Block
     * and this block deleted just after function ended
     */
}