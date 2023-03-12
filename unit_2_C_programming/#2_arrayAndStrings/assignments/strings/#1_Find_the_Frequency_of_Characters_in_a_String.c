/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-12 02:52:43
 * @ Known as: DarkStar0x714
 * @ Description: counter for char repeat ion a string
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char string[100] = {0}, charToBeSearched, counter = 0;

    printf("Enter a string: ");
    gets(string);

    printf("Enter a character to find frequency: ");
    scanf("%c", &charToBeSearched);

    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == charToBeSearched)
        {
            counter++;
        }
    }

    printf("Frequency of %c = %d", charToBeSearched, counter);
}