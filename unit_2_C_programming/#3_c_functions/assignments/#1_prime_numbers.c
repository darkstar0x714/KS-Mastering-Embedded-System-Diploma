/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-07 19:36:13
 * @ Known as: DarkStar0x714
 * @ Description:Prime Numbers Between two Intervals by Making User-defined Function
 */

#include <stdio.h>

int isPrime(int number)
{
    for (int i = 2; i <= number; i++)
    {
        if (number % i == 0 && number != i)
        {
            return 0;
        }
    }
}

int main()
{
    int userInputMin, userInputMax;

    printf("Enter two numbers(intervals):");
    scanf("%d %d", &userInputMin, &userInputMax);

    printf("Prime numbers between %d and %d are: ", userInputMin, userInputMax);
    for (int i = userInputMin; i <= userInputMax; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
}