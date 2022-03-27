#include <stdio.h>
#include <math.h>
double DegToRad(double degrees);
unsigned recursiveFactorial(int n);
double recMul(double in, int n);

int main () {
    int lim;
    double degrees;
    printf("Input Sin(x)'s degrees: ");
    scanf("%lf", &degrees);
    printf("Input limit.");
    scanf("%lf", &lim);

    double rad = DegToRad(degrees);
    double result;
    for (int i = 1; i <= lim; i++) {
        int j = 0;
        j += 2;
        if ( i % 2 !=0) {
            result += recMul(rad, j)/recursiveFactorial(j);
        } else
            result -= recMul(rad, j)/recursiveFactorial(j);

    }
    
    printf("Sin(%.2lf) = %lf", degrees, result);
	
    return 0;
}

double DegToRad(double degrees) {
    double rad;
    rad = (degrees / 180) * 3.1415;
    return rad;
}
unsigned recursiveFactorial(int n) {
    if (n >= 1) {
         return n*recursiveFactorial(n -1);
    }    else {
          return 1;
    }
  
}
double recMul(double in, int n) {
    if(n != 0) {
        return in * recMul(in, n - 1);
    } else {
        return 1;
    }
}
