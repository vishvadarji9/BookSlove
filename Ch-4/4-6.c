#include <stdio.h>
int main()
{
    float u, t, a, distance;
    printf("Enter initial velocity (u): ");
    scanf("%f", &u);
    printf("Enter time (t): ");
    scanf("%f", &t);
    printf("Enter acceleration (a): ");
    scanf("%f", &a);
    distance = (u * t) + (a * t * t)/2;
    printf("Total distance traveled: %.2f\n", distance);
    return 0;
}
