/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-05 22:16:51
 * @ Known as: DarkStar0x714
 * @ Description: search in array example on pass by reference
 */

#include <stdio.h>
#include <string.h>

int findName(char names[][14], int n, char name[]);

void main()
{
    char name[14];
    char names[5][14] = {"Alaa", "Osama", "Mamdouh", "Samy", "Hossain"};

    puts("Enter your first name:");

    gets(name);

    if (findName(names, 5, name) == 1)
    {
        puts("welcome");
    }
    else
    {
        puts("not found");
    }
}

int findName(char names[][14], int n, char name[])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(name, names[i]) == 0)
        {
            return 1;
            break;
        }
    }
    return 0;
}