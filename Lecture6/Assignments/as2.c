#include <stdio.h>

int main(){

    float grades[5];

    grades[0] = 57;
    printf("Students1: %.1f\n", grades[0]);

    grades[1] = 85;
    printf("Students1: %.1f\n", grades[1]);

    grades[2] = 97;
    printf("Students1: %.1f\n", grades[2]);

    grades[3] = 16;
    printf("Students1: %.1f\n", grades[3]);

    grades[4] = 82;
    printf("Students1: %.1f\n", grades[4]);

    printf("\nArray elements work like typical variables. \n");
    printf("\nIt means that we can perform operations with them.Ex: \n");
    printf("\nWe want to increase grade of Student1 by 2 points.. \n");

    grades[0] = grades[0] + 2;
    printf("\nUpdated grade of Student 1: %.1f\n", grades[0]);

    return 0;
}

