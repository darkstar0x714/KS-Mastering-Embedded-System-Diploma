/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2022-11-18 17:25:30
 * @ Known as: DarkStar0x714
 * @ Description: example to explain format specifier in c
 */

#include <stdio.h>

int main()
{
    unsigned char x = 0;

    printf("variable width control:\n");
    printf("right justified variable width :'%*c'\n", 5, 'x');
    printf("left justified variable width :'%*c'\n", -5, 'x');

    int r = printf("Strings:\n");
    printf("(the last printf printed %d characters)\n", r);

    const char *s = "Hello";
    printf("\t[%10s]\n\t[%-10s]\n\t[%*s]\n\t[%-10.*s]\n\t[%-*.*s]\n", s, s, 10, s, 4, s, 10, 4, s);

    printf("characters:\t%c %%\n", 65);

    printf("integers:\n");
    printf("decimals:\t%i %d %.6i %i %.0i %+i %u\n", 1, 2, 3, 0, 0, 4, -1); // important note %u print -1
    printf("Hexadecimal:\t%x %x %X %#x\n", 5, 10, 10, 6);
    printf("Octal:\t%o %#o %#o\n", 10, 10, 4);
    printf("Floating point\n");
    printf("Rounding:\t%f %.0f %.32f\n", 1.5, 1.5, 1.5);
    printf("Padding:\t%05.2f %.2f %5.2f\n", 1.5, 1.5, 1.5);
    printf("Scientific:\t%E %e\n", 1.5, 1.5);
    printf("Special values:\t 1/0=%g\n", 0.0 / 0.0, 1.0 / 0.0);

    // VIT
    printf("c_trick:\t %d %d %d \n", ++x, x, x++);
    printf("c_trick:\t %d %d %d \n", x++, ++x, x);
    return 0;
}
