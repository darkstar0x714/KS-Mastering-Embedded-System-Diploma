/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-27 22:29:30
 * @ Known as: DarkStar0x714
 * @ Description: unit 2 (c programming) >> loops and if >>Assign.3 >> C Program to find the largest number from 3 input
 */

#include <stdio.h>

int main()
{
    float n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
    {
        printf("Largest number = %.2f", n1);
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        printf("Largest number = %.2f", n2);
    }
    else if (n3 >= n1 && n3 >= n2)
    {
        printf("Largest number = %.2f", n3);
    }
    return 0;
}