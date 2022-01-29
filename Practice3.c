#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793238

int main()
{
    double velocity;        // Variable storing Velocity Input
    double time;            // Variable storing Time Input
    double radius;          // Variable storing Radius Input

    double linAccelration;  // Variable storing Linear Acceleration
    double angAcceleration; // Variable storing Angular Acceleration
    double angVelocity;     // Variable storing Angular Velocity
    double distance;        // Variable storing Distance Traveled
    double revolutions;     // Variable storing Total Revolutions

    printf("Enter the velocity of the vehicle [m/s] -> "); 
    scanf_s("%lf", &velocity);
    printf("Enter elapsed time [s] -> ");
    scanf_s("%lf", &time);
    printf("Enter radius of wheels [m] -> ");
    scanf_s("%lf", &radius);

    linAccelration = velocity / time;
    angAcceleration = linAccelration / radius;
    angVelocity = angAcceleration * time;
    distance = radius * angVelocity;
    revolutions = 0.5 * angAcceleration * pow(time, 2) / (2 * PI);

    printf("\nLinear Acceleration: %.2lf [m/s^2]", linAccelration);
    printf("\nAngular Acceleration: %.2lf [rad/s^2]", angAcceleration);
    printf("\nFinal Angular Velocity: %.2lf [rad/s]", angVelocity);
    printf("\nDistance Traveled: %.2lf [m]", distance);
    printf("\nNumber of Revolutions: %.2lf\n", revolutions);

    return(0);
}