/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-05 22:03:06
 * @ Known as: DarkStar0x714
 * @ Description: sample application on pass by reference to function
 */

#include <stdio.h>

int calcMin(int array[], int len);

int main()
{
    int valuesArray[] = {5,
                         2,
                         1,
                         4,
                         7,
                         -80,
                         6,
                         -100,
                         2,
                         10};

    printf("the min. element is = %d", calcMin(valuesArray, 10));
}

int calcMin(int array[], int len)
{
    int min = array[0];
    for (int i = 1; i < len; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}