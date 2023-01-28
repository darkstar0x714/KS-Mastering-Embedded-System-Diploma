/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-27 20:54:23
 * @ Known as: DarkStar0x714
 * @ Description: unit 2 (c programming) >> Assign.5 >> C Program to Find ASCII Value of a Character
 */

#include <stdio.h>

int main()
{
    char input;
    printf("Enter a character: ");
    scanf(" %c", &input);
    printf("ASCII value of %c = %d", input, input);
}