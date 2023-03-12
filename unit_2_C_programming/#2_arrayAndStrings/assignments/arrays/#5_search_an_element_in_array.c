/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-12 02:37:54
 * @ Known as: DarkStar0x714
 * @ Description: program to search within array and find index of given element
 */

#include <stdio.h>

int main()
{
    int array[100], sizeOfArray, elementToBeSearched;

    printf("Enter no of elements : ");
    scanf("%d", &sizeOfArray);

    for (int i = 0; i < sizeOfArray; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to be searched : ");
    scanf("%d", &elementToBeSearched);

    for (int i = 0; i < sizeOfArray; i++)
    {
        if (array[i] == elementToBeSearched)
        {
            printf("Number found at location = %d\n", i + 1);
            break;
        }
        if (array[i] != elementToBeSearched && i == sizeOfArray - 1)
        {
            printf("Element not found in array");
        }
    }
}
