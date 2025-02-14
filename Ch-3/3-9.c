//! 3.9 Write a C program to input an integer between 0 and 128 and print its ASCII characr.

#include <stdio.h>
int main() {
    int number;

    printf("Enter an integer between 0 and 128: ");
    scanf("%d", &number);


    if (number >= 0 && number <= 128) {
        printf("The ASCII character for %d is '%c'.\n", number, (char)number);
    } else {
        printf("Please enter a number between 0 and 128.\n");
    }

    return 0;
}