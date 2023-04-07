/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-07 20:16:19
 * @ Known as: DarkStar0x714
 * @ Description: C program to Reverse a Sentence Using Recursion
 */

#include <stdio.h>
#include <string.h>

void reverseString(char a[], int n)
{
    printf("%c", a[n]);
    if (n != 0)
    {
        reverseString(a, n - 1);
    }
}

int main()
{
    char array[100] = {0};

    printf("Enter a sentence: ");
    gets(array);

    reverseString(array, strlen(array));
}
