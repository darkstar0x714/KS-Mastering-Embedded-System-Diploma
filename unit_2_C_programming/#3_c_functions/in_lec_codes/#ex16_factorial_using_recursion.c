/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-07 16:48:00
 * @ Known as: DarkStar0x714
 * @ Description: recursion example to find factorial of the number
 */

#include <stdio.h>

long long factorial(long long input)
{
    static long long res = 1;
    if (input >= 1)
    {
        res = input * factorial(input - 1);
    }
    return res;
}

int main()
{
    long long userInput;
    scanf("%lld", &userInput);

    printf("%lld", factorial(userInput));
}