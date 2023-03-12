/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-24 09:05:20
 * @ Known as: DarkStar0x714
 * @ Description: program to calculate average using arrays
 */

#include <stdio.h>

int main()
{
    float array[100], sum = 0;
    int numberOfElements;

    printf("Enter the numbers of data: ");
    scanf("%d", &numberOfElements);

    for (int i = 0; i < numberOfElements; i++)
    {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &array[i]);
        sum += array[i];
    }

    printf("Average = %0.2f", sum / numberOfElements);
}