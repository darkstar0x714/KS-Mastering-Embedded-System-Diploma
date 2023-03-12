/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-23 22:37:12
 * @ Known as: DarkStar0x714
 * @ Description: make program to take and print students degree
 */

#include <stdio.h>

int main()
{
    float arr[11];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter student %d degree : ", i + 1);
        scanf("%f\n", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("student %d degree is %f\n", i + 1, arr[i]);
    }
}