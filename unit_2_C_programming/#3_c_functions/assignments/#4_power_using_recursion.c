#include <stdio.h>

int powerFun(int n, int p)
{
    static int res = 1;
    if (p > 0)
        res = n * powerFun(n, p - 1);

    return res;
}

int main()

{
    int number, power;

    printf("Enter base number: ");
    scanf("%d", &number);

    printf("Enter power number(positive integer) : ");
    scanf("%d", &power);

    printf("%d^%d = %d", number, power, powerFun(number, power));
}