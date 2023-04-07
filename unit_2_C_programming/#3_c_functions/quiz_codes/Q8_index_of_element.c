/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-07 14:34:47
 * @ Known as: DarkStar0x714
 * @ Description: write a C to return return index of LAST occurrence of number in given array (index starting from O ie. C array style).
 *                if the item is not in the list return -1
 */

#include <stdio.h>

int findIndexOfElement(int element, int array[], int arrayLen)
{
    int indexOfElement = -1;
    for (int i = 0; i < arrayLen; i++)
    {
        if (array[i] == element)
        {
            indexOfElement = i;
        }
    }
    return indexOfElement;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 4}, userInput;

    scanf("%d", &userInput);

    printf("the number is %d ==> result = %d", userInput, findIndexOfElement(userInput, array, 7));
}