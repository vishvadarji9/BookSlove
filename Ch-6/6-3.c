//! 3. A set of two linear equations with two unknowns x1 and x2 is given below:
//! ax 1 + bx 2 = m
//! cx 1 + dx 2 = n
//! The set has a unique solution
//! 	x1 = (m*d - b*n) / (a*d - c*d)
//! 	x2 = (n*a - m*c) / (a*d - c*b)
//! provided the denominator `ad – cb` is not equal to zero.
//! Write a program that will read the values of constants a, b, c, d, m, and n and compute the values of x 1 and x 2. An appropriate message should be printed if ad – cb = 0.

#include<stdio.h>
int main(){
    float a, b, c, d, m, n, x1, x2;
    printf("\nEnter the values of a, b, c, d, m and n: ");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &m, &n);

    if((a*d - b*c) == 0){
        printf("\nThe set of equations has no unique solution.");
    }else{
        x1 = (m*d - b*n) / (a*d - b*c);
        x2 = (n*a - m*c) / (a*d - b*c);
        printf("\nx1 = %.2f", x1);
        printf("\nx2 = %.2f", x2);
    }
    return 0;
}

