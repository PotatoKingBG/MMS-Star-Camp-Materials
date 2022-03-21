#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int XOROperator (int a, int b, int c, int*result, int* resultForThree);
int main () {
    int a, b, c,result,resultForThree;
    printf("Enter zeros and ones {a, b ,c}: \n");
    scanf("%d %d %d", &a, &b ,&c);
    XOROperator(a,b,c,&result,&resultForThree);
    // gcc Zadacha1.c -o m; ./m < FileInput.txt
    return EXIT_FAILURE;
}
int XOROperator (int a, int b, int c, int *result, int*resultForThree) {
    *result = a ^ b;
    *resultForThree = a ^ b ^ c;
    printf("Result for two numbers is: %d\n", *result);
    printf("Result for three numbers is: %d\n", *resultForThree);
}

