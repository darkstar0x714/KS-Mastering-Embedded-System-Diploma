/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-02-23 22:52:13
 * @ Known as: DarkStar0x714
 * @ Description: Polynomial calculator
 */

#include <stdio.h>

int main()
{
    float arr[] = {5, 16, 22, 3.5, 15};

    for (int i = 0; i < 5; i++)
    {
        printf("f(%f)=%f\n", arr[i], 5 * arr[i] * arr[i] + 3 * arr[i] + 2);
    }
}