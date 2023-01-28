/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-27 22:16:29
 * @ Known as: DarkStar0x714
 * @ Description: unit 2 (c programming) >> loops and if >>Assign.1 >> number is even or odd
 */

#include <stdio.h>
int main()
{
    int num;

    printf("Enter an integer you want t check: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("%d is even.", num) : printf("%d is odd.", num);

    return 0;
}