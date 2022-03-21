#include <stdio.h>
#include <math.h>

int main () {
    double height, radius,lenght, areaSector, areaSegment ,areaTriangle, volume;
    printf("Enter Height in meters: ");
    scanf("%lf", &height);
    printf("Enter Radius in meters: ");
    scanf("%lf", &radius);
    printf("Enter Lenght in meters: ");
    scanf("%lf", &lenght);
    
    areaSector = pow(cos((radius - height)/radius), -1) * pow(radius, 2);
    areaTriangle = (radius - height)* sqrt(2 * radius * height - pow(height, 2));
    areaSegment = areaSector - areaTriangle;
    volume = areaSegment * lenght;

    printf("Volume in cubic meter is: %.2f", volume);
    return 0;
}