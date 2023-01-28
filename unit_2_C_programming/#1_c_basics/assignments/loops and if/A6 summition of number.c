/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-28 19:56:28
 * @ Known as: DarkStar0x714
 * @ Description:unit 2 (c programming) >> loops and if >>Assign.6 >> c program make user enter number and program return the summation
 */

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    sum = (n * (n + 1)) / 2; // gauss summation formula
    printf("sum = %d", sum);
}