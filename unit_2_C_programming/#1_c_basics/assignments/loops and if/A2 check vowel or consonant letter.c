/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-01-27 22:16:29
 * @ Known as: DarkStar0x714
 * @ Description: unit 2 (c programming) >> loops and if >>Assign.2 >> vowel or consonant letter
 */

#include <stdio.h>

int main()
{
    char inputChar;
    printf("Enter an alphabet: ");
    scanf(" %c", &inputChar);

    switch (inputChar)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'o':
    case 'O':
    case 'i':
    case 'I':
    case 'u':
    case 'U':
        printf("%c is a vowel", inputChar);
        break;

    default:
        printf("%c is a consonant", inputChar);
        break;
    }
}