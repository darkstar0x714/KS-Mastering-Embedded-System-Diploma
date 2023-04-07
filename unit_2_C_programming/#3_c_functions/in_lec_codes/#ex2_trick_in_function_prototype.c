/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-05 21:35:45
 * @ Known as: DarkStar0x714
 * @ Description: this code show trick in function prototyping (default function type is integer)
 */

/********************************Normal behavior*******************************
we must make function prototype before we can use the function in our code
and if we removed printingFunction() prototype will give us an error
*/

/********************************abnormal behavior*******************************
we used add(int a, int b) without declaration and it worked
this is due to the default return type of function is integer
*/
#include <stdio.h>

char printingFunction();

void main()
{
    printf("%c\n", printingFunction());
    printf("%d\n", add(1, 2));
}

char printingFunction()
{
    return 'A';
}

int add(int a, int b)
{
    return a + b;
}