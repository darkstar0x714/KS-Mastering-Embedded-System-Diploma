/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-07 02:58:29
 * @ Known as: DarkStar0x714
 * @ Description: #ex11_static_var_visibility
 */

#include <stdio.h>
#include "#ex12_externFile.c"

int xxx; // it will initially xxx=0

void anotherFileFunction();

int main()
{
    printf("main.c xxx=%d\n", xxx);
    anotherFileFunction();
    printf("main.c xxx=%d\n", xxx);
    xxx = 8;
    anotherFileFunction();
    printf("main.c xxx=%d\n", xxx);
}

/*
 * conclusion : error due to var is declared more than one time to fix it but extern before var in extern file
 */