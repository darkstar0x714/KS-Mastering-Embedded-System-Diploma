/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-27 20:54:23
 * @ Known as: DarkStar0x714
 * @ Description: unit 2 (c programming) >> Assign.6 >> Write Source Code to Swap Two Numbers
 */

#include <stdio.h>

int main()
{
    float n1, n2, temp;

    printf("Enter value of a: ");
    scanf("%f", &n1);
    printf("Enter value of b: ");
    scanf("%f", &n2);

    temp = n1;
    n1 = n2;
    n2 = temp;

    printf("\nAfter swapping, value of a = %.2f\n", n1);
    printf("After swapping, value of b = %.2f", n2);

    return 0;
}