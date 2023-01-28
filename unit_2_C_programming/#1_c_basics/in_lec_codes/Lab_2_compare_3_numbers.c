/*
 * name : Lab_2_compare_3_numbers.c
 * Created by : Amir W. Fathy on 9/5/2022.
 * Distribution : c program make user enter 3 numbers and print the max one
*/

#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter your 3 numbers to compare");
    scanf("%f %f %f", &a, &b, &c);
    if (a > b) {
        if (a > c) {
            printf("The max num is = %f\n", a);
        } else{
            printf("The max num is = %f\n", c);
        }
    }else{
        if (b > c) {
            printf("The max num is = %f\n", b);
        } else{
            printf("The max num is = %f\n", c);
        }
    }
}
