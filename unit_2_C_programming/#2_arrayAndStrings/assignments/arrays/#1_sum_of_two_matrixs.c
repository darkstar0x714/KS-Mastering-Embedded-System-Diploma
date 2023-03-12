/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-24 08:50:35
 * @ Known as: DarkStar0x714
 * @ Description:  make a c program to take and sum 2 matrixes
 */

#include <stdio.h>

int main()
{
    float matrix1[2][2], matrix2[2][2], sumMatrix[2][2];

    printf("Enter the elements of 1st matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%f", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of 2nd matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter b%d%d: ", i + 1, j + 1);
            scanf("%f", &matrix2[i][j]);
        }
    }

    printf("\nSum of Matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%0.1f\t", matrix1[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }
}
