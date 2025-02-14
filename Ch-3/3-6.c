//! 3.6 Write a program to illustrate the use of symbolic constants in a real-life application.
#include <stdio.h>
#define PI 3.14
#define RADIUS 5

int main() {
    float area, circumference;
    area = PI * RADIUS * RADIUS;
    circumference = 2 * PI * RADIUS;

    printf("For a circle with radius %d:\n", RADIUS);
    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);

    return 0;
}