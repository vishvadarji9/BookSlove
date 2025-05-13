//6.11  Write a program to read three integer values from the keyboard and displays the output stating that
// they are the sides of right-angled triangle.

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a * a == b * b + c * c) ||
        (b * b == a * a + c * c) ||
        (c * c == a * a + b * b)) {
        printf("The given sides form a right-angled triangle.\n");
    } else {
        printf("The given sides do NOT form a right-angled triangle.\n");
    }

    return 0;
}

