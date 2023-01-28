/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-28 19:35:57
 * @ Known as: DarkStar0x714
 * @ Description: unit 2 (c programming) >> loops and if >>Assign.4 >> C Program to detect +ve -ve zero numbers
 */

#include <stdio.h>

int main()
{
    float inputNumber;
    printf("Enter a number: ");

    scanf("%f", &inputNumber);

    if (inputNumber > 0)
    {
        printf("%.2f is positive", inputNumber);
    }
    else if (inputNumber < 0)
    {
        printf("%.2f is negative", inputNumber);
    }
    else
    {
        printf("You entered zero");
    }
}