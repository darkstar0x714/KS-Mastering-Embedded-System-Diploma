/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-03-12 03:04:40
 * @ Known as: DarkStar0x714
 * @ Description: reverse string without using built in functions
 */

#include <stdio.h>

int main()
{
    char inputString[100] = {0}, stringLen = 0, reversedString[100] = {0};

    printf("Enter the string : ");
    scanf("%s", inputString);

    for (int i = 0; i < inputString[i] != 0; i++)
    {
        stringLen++;
    }

    for (int i = 0; i < stringLen; i++)
    {
        reversedString[i] = inputString[stringLen - i - 1]; // this one to ignore the last char in string "\0"
    }
    printf("Reverse string is : %s", reversedString);
}