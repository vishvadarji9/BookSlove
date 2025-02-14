//!2.5 Write a C program that reads the value of distance travelled by a car and the time taken for the same. Next, compute the speed at which the car travelled.
#include <stdio.h>
int main()
{
    float d, t, speed;
    printf("Enter the value of distance and time: \n");
    scanf("%f %f", &d, &t);
    speed = d / t;
    printf("The speed of the car is :%.2f km/h", speed);
    return 0;
}