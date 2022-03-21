#include <stdio.h>
#include <math.h>
int main () {
    double height, radius, area, volume;
    printf("Enter Height in meters: ");
    scanf("%lf", &height);
    printf("Enter Radius in meters: ");
    scanf("%lf", &radius);
    area = M_PI * pow(radius, 2);
    volume = area * height;
    printf("Area: %.2f m2\n", area);
    printf("Volume : %.2f m3\n", volume);
    return 0;
}