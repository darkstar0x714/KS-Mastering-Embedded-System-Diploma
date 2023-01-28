/*
 * name : Lab_3_compare_2_numbers_using_inline_condition.c
 * Created by : Amir W. Fathy on 9/5/2022.
 * Distribution : c program make user enter 2 numbers and print the min one
 *                using inline condition
*/

#include <stdio.h>

int main() {
    float a, b;
    printf("Enter your 2 numbers to compare");
    scanf("%f %f", &a, &b);
    (a > b) ? printf("The min. number is = %f", b) : printf("The min. number is = %f", a);

    // another syntax
    //     printf("The min. number is = %f",(a>b)?b:a);
}