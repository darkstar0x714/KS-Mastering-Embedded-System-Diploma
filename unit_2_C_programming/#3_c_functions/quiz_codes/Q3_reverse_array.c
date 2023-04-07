/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-07 12:48:19
 * @ Known as: DarkStar0x714
 * @ Description: print function in reverse
 */

#include <stdio.h>

void printArray(int array[], int arrayLen)
{
    for (int i = 0; i < arrayLen; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void printReversedArray(int array[], int arrayLen)
{
    for (int i = arrayLen - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};

    printf("array before reverse :");
    printArray(array, 6);

    printf("array after reverse :");
    printReversedArray(array, 6);
}
