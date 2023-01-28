/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-28 19:42:43
 * @ Known as: DarkStar0x714
 * @ Description: unit 2 (c programming) >> loops and if >>Assign.5 >> C Program to detect is input is alphabet or not
 */

#include <stdio.h>

int main()
{
    char input;
    printf("Enter a character: ");
    scanf(" %c", &input);

    if (input >= 65 && input <= 122)
    {
        printf("%c is an alphabet", input);
    }
    else
    {
        printf("%c is not an alphabet", input);
    }
}