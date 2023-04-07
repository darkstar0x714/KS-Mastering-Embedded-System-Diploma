/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-07 12:32:21
 * @ Known as: DarkStar0x714
 * @ Description: Write a C program for swapping two arrays "A & B" with different lengths
 */

#include <stdio.h>

void printArray(int array[], int arrayLen)
{
    for (int i = 0; i < arrayLen; i++)
    {
        printf("%d ", array[i]);
    }
}

void swappingArray(int array1[], int array2[], int arrayLen1, int arrayLen2)
{
    for (int i = 0, j = 0; i < arrayLen1 && j < arrayLen2; i++, j++)
    {
        int temp = array1[i];
        array1[i] = array2[j];
        array2[j] = temp;
    }
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int B[] = {10, 11, 12};

    int temp;

    int len1 = sizeof(A) / sizeof(int);
    int len2 = sizeof(B) / sizeof(int);

    printf("Before swapping:\n");
    printf("First array: ");
    printArray(A, len1);

    printf("Second array: ");
    printArray(B, len2);

    swappingArray(A, B, len1, len2);

    printf("After swapping:\n");
    printf("First array: ");
    printArray(A, len1);

    printf("Second array: ");
    printArray(B, len2);
}