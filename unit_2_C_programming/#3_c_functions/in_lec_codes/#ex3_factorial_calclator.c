/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-05 21:55:56
 * @ Known as: DarkStar0x714
 * @ Description: simple program to calculate factorial of number using functions
 */

#include <stdio.h>

int factorial(int number);

int main()
{
    int userInput;

    scanf("%d", &userInput);

    printf("Factorial(%d) = %d\r\n", userInput, factorial(userInput));
}

int factorial(int number)
{
    int f = 1;
    while (number > 0)
    {
        f *= number;
        number--;
    }
    return f;
}