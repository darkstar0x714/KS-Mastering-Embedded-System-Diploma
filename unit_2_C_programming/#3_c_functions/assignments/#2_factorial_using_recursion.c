/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-07 19:36:13
 * @ Known as: DarkStar0x714
 * @ Description:Prime Numbers Between two Intervals by Making User-defined Function
 */

#include <stdio.h>

int factorial(int number)
{
    static int res = 1;
    if (number >= 1)
        res = number * factorial(number - 1);
    return res;
}

int main()
{
    int userInput;

    printf("Enter an positive integer: ");
    scanf("%d", &userInput);

    printf("Factorial of %d = %d", userInput, factorial(userInput));
}