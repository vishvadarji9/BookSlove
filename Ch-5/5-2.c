//! 2. Write a program to read the values of x and y and print the results of the following expressions in oneline:
//! (a) (x+y) / (x-y)
//! (b) (x+y) /2
//! (c) (x+y)(x–y)

#include <stdio.h>

int main() {
    float x, y; 
    printf("Enter the value of x and y: ");
    scanf("%f %f", &x, &y);

    printf("(x+y)/(x-y) = %.2f\n", (x + y) / (x - y));
    printf("(x+y)/2 = %.2f\n", (x + y) / 2);
    printf("(x+y)(x-y) = %.2f\n", (x + y) * (x - y));

    return 0;
}


