#include <stdio.h>
#include<math.h>
// BMI Calculator program
int main () { 
    double BMI, NickBMI, mass, height;
    printf("Enter mass in kg: ");
    scanf("%lf", &mass);
    printf("Enter height in meters: ");
    scanf("%lf", &height);
    BMI = mass / (height * height);
    NickBMI = 1.3 * (mass/pow(height, 2.5));
    printf("Your Standart BMI: %lf\n", BMI);
    printf("Nick Trefethen's BMI Formula: %lf\n", NickBMI);
    return 0;
}
