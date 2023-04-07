/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-07 03:27:31
 * @ Known as: DarkStar0x714
 * @ Description: try to fix this code without remove extern
 */

/*
#include <stdio.h>

extern int x;

int main()
{
    x = 1;
    printf("%d", x);
}
*/
#include <stdio.h>

extern int x;

int main()
{
    x = 1;
    printf("%d", x);
}
int x;

/*
 * conclusion : The external storage class is used to tell the compiler that the variable defined as extern is declared with an external linkage elsewhere in the program.
 *              The variables declared as extern are not allocated any memory. It is only declaration and intended to specify that the variable is declared elsewhere in the program
 */