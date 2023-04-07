/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-07 02:48:13
 * @ Known as: DarkStar0x714
 * @ Description: example to show mean of static variables
 */

#include <stdio.h>

void myFunction()
{
    static int x = 0;
    int y = 0;

    x++;
    y++;

    printf("x = %d\ty = %d\r\n", x, y);
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        myFunction();
    }
}

/***************************output is**************************
x = 1   y = 1
x = 2   y = 1
x = 3   y = 1
x = 4   y = 1
x = 5   y = 1
x = 6   y = 1
x = 7   y = 1
x = 8   y = 1
x = 9   y = 1
x = 10  y = 1
*/

/****************************explanation*************************
Static variables are defined by the modifier static.
Static variables are initialized once in the program life.
For example if the variable (x) is defined inside a function, the variable is initialized only at first
function call, further function calls do not perform the initialization step,
this means that if the variable is modified by any call the modification result remains for the next call.
Following example illustrate this idea
 */