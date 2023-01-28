/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-28 20:31:31
 * @ Known as: DarkStar0x714
 * @ Description: unit 2 (c programming) >> loops and if >>Assign.8 >> c program make calculator
 */

#include <stdio.h>

int main()
{
    float n1, n2;
    char operation;

    printf("Enter operator either + or - or * or / : ");
    scanf(" %c", &operation);

    printf("Enter two operands : ");
    scanf("%f", &n1);
    scanf("%f", &n2);

    switch (operation)
    {
    case '+':
        printf("%.1f %c %.1f = %.1f", n1, operation, n2, n1 + n2);
        break;
    case '-':
        printf("%.1f %c %.1f = %.1f", n1, operation, n2, n1 - n2);
        break;
    case '*':
        printf("%.1f %c %.1f = %.1f", n1, operation, n2, n1 * n2);
        break;
    case '/':
        printf("%.1f %c %.1f = %.1f", n1, operation, n2, n1 / n2);
        break;
    default:
        printf("wrong operation");
        break;
    }
}