#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793238

int main()
{
    double distanceA; // Distance input of vector A
    double angleA;    // Angle input of vector A
    double distanceB; // Distance input of vector B
    double angleB;    // Angle input of vector A

    double xcompR;    // X component output of resultant vector
    double ycompR;    // Y component output of resultant vector
    double distR;     // Distance output of resultant vector
    double angleR;    // Angle output of resultant vector

    printf("Enter distance and angle for vector A -> ");
    scanf_s("%lf %lf", &distanceA, &angleA);
    printf("Enter distance and angle for vector B -> ");
    scanf_s("%lf %lf", &distanceB, &angleB);
    
    xcompR = distanceA * cos(angleA * PI / 180) + distanceB * cos(angleB * PI / 180);
    ycompR = distanceA * sin(angleA * PI / 180) + distanceB * sin(angleB * PI / 180);
    distR = sqrt(pow(xcompR, 2) + pow(ycompR, 2));
    angleR = atan(ycompR / xcompR) * 180 / PI;

    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    printf("\nResultant x-component:%8.2lf meters", xcompR);
    printf("\nResultant y-component:%8.2lf meters", ycompR);
    printf("\nResultant magnitude: %-9.2lf meters", distR);
    printf("\nResultant direction: %-8.2lf degrees", angleR);
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");

    return(0);
}
