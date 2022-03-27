 
#include<stdio.h>
double sqrt(double number);
int main() {
    int number;
    printf("Enter a Number : ");
    scanf("%d",&number);
    sqrt(number);
}
double sqrt(double number) {
    double root = 1;
    int i = 0;
    while (1)
    {
        i = i + 1;
        root = (number / root + root) / 2;
        if (i == number + 1) { break; }
    }
    printf("%lf",root);
}