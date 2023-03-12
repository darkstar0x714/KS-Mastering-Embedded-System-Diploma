/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-12 02:59:55
 * @ Known as: DarkStar0x714
 * @ Description: implement strlen() function
 */

#include <stdio.h>

int main()
{
    int counter = 0;
    char string[100] = {0};

    printf("Enter a string: ");
    scanf("%s", string);

    for (int i = 0; i < string[i] != 0; i++)
    {
        counter++;
    }

    printf("Length of string: %d", counter);
}