/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-07 12:23:49
 * @ Known as: DarkStar0x714
 * @ Description: Write a C program takes string from the user and check if it the same USERNAME or not
 */

#include <stdio.h>
#include <string.h>

int findName(char names[][14], int n, char name[]);

void main()
{
    char name[14];
    char userNames[5][14] = {"Amir", "Bishoy", "Bassam", "Khilifa", "Man"};

    puts("Enter your first name:");

    gets(name);

    if (findName(userNames, 5, name) == 1)
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