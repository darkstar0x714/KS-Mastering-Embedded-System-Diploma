/*
 * name : Lab_1_calculate_circle_area_and_circumference
 * Created by : Amir W. Fathy on 9/5/2022.
 * Distribution : c program make user choose to calculate area, circumference or both of them
 *                for a circle.
*/

#include <stdio.h>

int main() {
    float rad, area, circum, pi = 3.14159;
    char choice; // to choose what user need to calculate

    printf("Enter \'a\' to calculate area, \'c\' to calculate circumference OR \'b\' for both");
    scanf("%c", &choice);
    printf("Enter circle radius");
    scanf("%f", &rad);

    if (choice == 'a'||choice == 'A') {
        area = rad * rad * 3.14159;
        printf("The area is = %f", area);
    } else if (choice == 'c'||choice == 'C') {
        circum = rad * 2 * 3.14159;
        printf("The circumference is = %f", circum);
    } else if (choice == 'b'||choice == 'B') {
        area = rad * rad * 3.14159;
        circum = rad * 2 * 3.14159;
        printf("The area is = %f\n", area);
        printf("The circumference is = %f\n", circum);
    } else {
        printf("Wrong choice please select again from (a-c-b)");
    }
}

//-----------------------------------Another Solution using Switch case ----------------------------------------

/*
#include <stdio.h>

int main() {
    float rad, area, circum, pi = 3.14159;
    char choice; // to choose what user need to calculate

    printf("Enter \'a\' to calculate area, \'c\' to calculate circumference OR \'b\' for both");
    scanf("%c", &choice);
    printf("Enter circle radius");
    scanf("%f", &rad);
    switch (choice) {
        case 'a':
        case 'A': {
            area = rad * rad * 3.14159;
            printf("The area is = %f", area);
        }
            break;
        case 'c':
        case 'C': {
            circum = rad * 2 * 3.14159;
            printf("The circumference is = %f", circum);
        }
            break;
        case 'b':
        case 'B': {
            area = rad * rad * 3.14159;
            circum = rad * 2 * 3.14159;
            printf("The area is = %f\n", area);
            printf("The circumference is = %f\n", circum);
        }
            break;
        default: {
            printf("Wrong choice please select again from (a-c-b)");
        }
    }
}
*/