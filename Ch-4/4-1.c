//! 4-1 Write a program that reads a floating-point number and then displays the right-most digit of the integral part of the number.

#include <stdio.h>
int main()
{
    float num;
    int integralPart = (int)num;
    printf("Enter a float number: ");
    scanf("%f", &num);
    printf("Right-most digit: %d\n", integralPart % 10);
    return 0;
}
