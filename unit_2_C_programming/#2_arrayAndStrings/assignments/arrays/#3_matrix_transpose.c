/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-24 09:46:54
 * @ Known as: DarkStar0x714
 * @ Description: take matrix dimension from user and find matrix transpose for it
 */

#include <stdio.h>

int main()
{
    int matrix[100][100], rows, column;

    printf("Enter rows and column of matrix: ");
    scanf("%d%d", &rows, &column);

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter elements a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Entered matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of matrix:\n");
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d\t", matrix[j][i]);
        }
        printf("\n");
    }
}