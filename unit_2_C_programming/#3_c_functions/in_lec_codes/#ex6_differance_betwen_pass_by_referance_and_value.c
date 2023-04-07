/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-05 22:34:51
 * @ Known as: DarkStar0x714
 * @ Description: difference between pass by reference and value and the relation with functions stack memory
 */

#include <stdio.h>

/*
 * number: is pass by value argument
 * text : pass by reference pointer to the first element in array
 */
void modifyFunction(int number, char text[])
{
    number++;
    text[0]--;
    printf("from inside the function v = %d, name = %s\r\n", number, text);
}

void main()
{
    int v = 5;
    char name[5] = "Good";

    printf("v = %d, name = %s\r\n", v, name);
    modifyFunction(v, name);
    printf("v = %d, name = %s\r\n", v, name);
}

/*
* output is :
v = 5, name = Good
from inside the function v = 6, name = Food
v = 5, name = Food

why name is changed and number don't ???!

this is due to name is passed by reference that mean any edit will done inside the source segment of data

but in number it passed by value so the function make a copy to data to it's own stack memory before executing
any code so the edit done inside the function only but the source data isn't changed but change done only inside
the function stack but value at main stack is remain unchanged
*/