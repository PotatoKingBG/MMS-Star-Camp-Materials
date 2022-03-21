#include <stdio.h>
#include <stdlib.h>

int main () {
    double a,b,c;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a,&b,&c);
    if ( a > b && a > c)
        printf("Number %.2lf is the greatest.", a);
    if (b > a && b > c)
        printf("Number %.2lf is the greatest.", b);
    if (c > a && c > b)
        printf("Number %.2lf is the greatest.", c);

    // Syzdavame tekstov fail s imeto FileInput v direktoriqta na programata
    // Zapisvame tri chisla v nego
    // compilirame v consolata i zadavame put
    // gcc Zadacha1.c -o m; ./m < FileInput.txt



    return EXIT_SUCCESS; 

}