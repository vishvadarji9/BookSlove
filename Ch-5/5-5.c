//! 5. Write an interactive program to demonstrate the process of multiplication. The program should ask the user to enter two two-digit integers and print the product of integers as shown below.
//!
//!                       45
//!                   x   37
//!     ________________________
//!      7 x 45 is       315
//!      3 x 45 is       135
//!      ______________________
//!      Add them       1665

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two two-digit numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n   %d\n x %d\n", a, b);
    printf(" _________________\n");

    int unit = b % 10, tens = b / 10;
    printf(" %d x %d is %d\n", unit, a, unit * a);
    printf(" %d x %d is %d\n", tens, a, tens * a * 10);
    printf(" _________________\n");
    printf(" Add them     %d\n", a * b);
    printf(" _________________\n");

    return 0;
}

