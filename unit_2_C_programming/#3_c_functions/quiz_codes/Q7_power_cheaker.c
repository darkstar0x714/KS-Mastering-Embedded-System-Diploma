/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-07 14:03:34
 * @ Known as: DarkStar0x714
 * @ Description: write a C function that return O if a given number is a power of 3,
                  otherwise return 1 (except 3 to the power 0)
 */

#include <stdio.h>

int powerChecker(int number, int multiplier)
{
    if (number % multiplier == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int userInput;

    scanf("%d", &userInput);

    printf("%d==>%d", userInput, powerChecker(userInput, 3));
}