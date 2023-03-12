/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-23 23:05:57
 * @ Known as: DarkStar0x714
 * @ Description: Calculate and Print the Transpose of 3x3 Matrix
 */

#include <stdio.h>

int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("matrix before transpose ------> \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("matrix after transpose ------> \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
}