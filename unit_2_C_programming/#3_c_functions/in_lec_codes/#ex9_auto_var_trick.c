/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-07 02:38:29
 * @ Known as: DarkStar0x714
 * @ Description: tricky code using automatic local variable
 */

#include <stdio.h>

int main()
{
    int a = 10;

    printf("a = %d\r\n", ++a);

    {
        int a = 20;

        printf("a = %d\r\n", a); // a is local var inside {block}
    }

    printf("a = %d\r\n", a);
}

/*
 * the visibility and scope of automatic variables is limited to the block in which they are defined
 */