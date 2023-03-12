/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-24 10:26:32
 * @ Known as: DarkStar0x714
 * @ Description: program to take element and position from user and insert it into an array
 */

#include <stdio.h>

int main()
{
    int numberOfArrayElements, array[100], elementToBeInserted, locationOfElement;

    printf("Enter no of elements : ");
    scanf("%d", &numberOfArrayElements);

    for (int i = 0; i < numberOfArrayElements; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to be inserted : ");
    scanf("%d", &elementToBeInserted);

    printf("Enter the location : ");
    scanf("%d", &locationOfElement);

    for (int i = numberOfArrayElements - 1; i >= locationOfElement - 1; i--)
    {
        array[i + 1] = array[i];
    }

    array[locationOfElement - 1] = elementToBeInserted;

    for (int i = 0; i <= numberOfArrayElements; i++)
    {
        printf("%d ", array[i]);
    }
}
