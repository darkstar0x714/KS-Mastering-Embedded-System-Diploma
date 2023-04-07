/**
 * @ Author: Amir W. Fathy
 * @ Create Time: 2023-04-05 21:29:13
 * @ Known as: DarkStar0x714
 * @ Description: example to show how to use functions in basic way to make code more simple
 */

#include <stdio.h>
#include <math.h>

float calcm(float x, float y)
{
    float m;
    m = 5 * (x + y) * (x + y) + 3 * x + 2 * y + 2;
    return m;
}

void main()
{
    float z;

    z = (calcm(3, 2) + sqrt(pow(calcm(6, 1.5), 3.2f) + calcm(5, 3.4))) / calcm(13, 1.2);

    printf("z = %f\r\n", z);
}