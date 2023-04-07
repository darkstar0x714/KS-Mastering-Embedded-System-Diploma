/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-07 02:58:29
 * @ Known as: DarkStar0x714
 * @ Description: #ex11_static_var_visibility
 */

#include <stdio.h>
#include "#ex11_externFile.c"

static int xxx; // it will initially xxx=0

void anotherFileFunction();

int main()
{
    printf("main.c xxx=%d\n", xxx); // 0
    anotherFileFunction();          // 1
    printf("main.c xxx=%d\n", xxx); // 0
    xxx = 8;
    anotherFileFunction();          // 4
    printf("main.c xxx=%d\n", xxx); // 8
}

/*
 * conclusion : the visibility of the static global variable is limited to the file in which it has declared
 */