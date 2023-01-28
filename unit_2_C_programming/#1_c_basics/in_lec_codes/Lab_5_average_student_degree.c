/*
 * name : Lab_5_average_student_degree.c
 * Created by : Amir W. Fathy on 1/28/2023.
 * Distribution : c program make user enter number and program calculate average
 */

#include <stdio.h>
int main(int argc, char **argv)
{
    int i, nStudents;
    float degree, sum;
    printf("Enter the number of the students:");

    scanf("%d", &nStudents);
    for (i = 1, sum = 0; i <= nStudents; i++)
    {
        printf("Enter student (%d) degree:", i);

        scanf("%f", &degree);
        sum += degree;
    }
    printf("Average students degree is : %.2f\r\n", sum / nStudents);
}
