//! 6. Write a program to read three integers from the keyboard using one scanf statement and output them on one line using:
//! (a) three printf statements,
//! (b) only one printf with conversion specifiers, and
//! (c) only one printf without conversion specifiers.

#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // (a) three printf statements
    printf("Three integers are: %d, %d, %d\n", a, b, c);

    // (b) only one printf with conversion specifiers
    printf("Three integers are: %d, %d, %d\n", a, b, c);

    // (c) only one printf without conversion specifiers
    printf("Three integers are: ");
    printf("%d, ", a);
    printf("%d, ", b);
    printf("%d\n", c);

    return 0;
}