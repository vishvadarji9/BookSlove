#include <stdio.h>
#include <math.h>
int main()
{
    float num;
    printf("Enter a real number: ");
    scanf("%f", &num);
    int smallestInt = floor(num);
    int largestInt = ceil(num);
    printf("Smallest integer not less than the number: %d\n", smallestInt);
    printf("Largest integer not greater than the number: %d\n", largestInt);
    return 0;
}