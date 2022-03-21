#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <math.h>
void swapNums(int *a, int *b);
void setValues(int* num1, double* num2);
int rectangle(double w, double h, double *P, double *S);
int triangle(double a1, double b1, double c1, double *PTri, double *STri);
int main () {
    int a =150, b = 200;
    
    swapNums(&a,&b);
    printf("a: %d, b: %d \n", a, b);

    int n;
    double m;
    setValues(&n, &m);
    printf("%d %lf\n", n, m);

    double per,area;
    if(rectangle(5, 6.1, &per, &area) == -1){
        printf("Invalid sides\n");
    }
    else {
        printf("RECTANGLE P = %.2lf, S = %.2lf\n", per, area);
    }
    double TriP;
    double TriS;
    double aTri, bTri, cTri;
    while(scanf("%lf %lf %lf", &aTri, &bTri, &cTri) != EOF) {
            if(triangle(aTri, bTri, cTri, &TriP, &TriS) == -1){
                printf("Invalid sides\n");
                // fprintf(stderr, "Invalid sides\n") da ipzratim kum stderr
            }
            else {
                printf("TRIANGLE P = %.2lf, S = %.2lf\n", TriP, TriS);
    }
    }
    
    return EXIT_SUCCESS;
}

int rectangle(double w, double h, double *P, double *S){
    if (w <= 0 || h <= 0) {
        return -1;
    }
    *P = 2*(w+h);
    *S = w * h;
    return 0;
} 
int triangle(double a1, double b1, double c1, double *PTri, double *STri) {
    if (a1 < 0 || b1 < 0 || c1 < 0 || a1 + b1 < c1 || b1 + c1 < a1 || c1 + a1 < b1) {
        return -1;
    }
    *PTri = a1 + b1 + c1;
    double p = *PTri / 2;
    *STri = sqrt(p * (p-a1)*(p-b1)*(p-c1));
    return 0;
}

void swapNums(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void setValues(int* num1, double* num2){
    *num1 = 180;
    *num2 = 3.14;
}