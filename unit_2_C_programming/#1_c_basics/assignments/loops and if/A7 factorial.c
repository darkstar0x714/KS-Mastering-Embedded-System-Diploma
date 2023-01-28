/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-28 20:01:12
 * @ Known as: DarkStar0x714
 * @ Description:unit 2 (c programming) >> loops and if >>Assign.7 >> c program make user enter number and program return the factorial
 */

#include <stdio.h>

int main()
{
    long long n, sum = 0;

    long long result = 1;

    printf("Enter an integer: ");
    scanf("%lld", &n);
    if (n < 0)
    {
        printf("Error!!! Factorial of negative number doesn't exist");
    }
    if (n == 0)
    {
        printf("Factorial = %lld", 1);
    }
    else if (n > 0)
    {
        for (long long i = 1; i <= n; i++)
        {
            result = result * i;
        }
        printf("Factorial = %lld", result);
    }
}