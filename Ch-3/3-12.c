//!3.12 Write a C program to input the amount value and break it into the smallest possible indian currency notes.
#include <stdio.h>

int main() {
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);

    if (amount <= 0) {
        printf("Invalid amount.\n");
        return 0;
    }

    printf("Breakdown of %d:\n", amount);

    printf("500: %d\n", amount / 500);
    amount %= 500;

    printf("200: %d\n", amount / 200);
    amount %= 200;

    printf("100: %d\n", amount / 100);
    amount %= 100;

    printf("50: %d\n", amount / 50);
    amount %= 50;

    printf("20: %d\n", amount / 20);
    amount %= 20;

    printf("10: %d\n", amount / 10);
    amount %= 10;

    printf("5: %d\n", amount / 5);
    amount %= 5;

    printf("2: %d\n", amount / 2);
    amount %= 2;

    printf("1: %d\n", amount);
    
    return 0;
}