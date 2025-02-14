//!2-4 Given the values of three variables a, b and c, write a program to compute and display the value of x, where x = a / ( b - c ) Execute your program for the following values:
//! (a) a = 250, b = 85, c = 25
//! (b) a = 300, b = 70, c = 70

#include <stdio.h>
int main()
{
    int a, b, c;
    float x;
    printf("Enter the value of a,b,c: \n");
    scanf("%d %d %d", &a, &b, &c);
    x = (float) a /(float) (b - c);
    printf("The value of x is: %.2f", x);
    return 0;
}