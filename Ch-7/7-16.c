// 16. Given a set of 10 two-digit integers containing both positive and negative values, write a program using for loop to compute the sum of all positive values and print the sum and the number of values added.
// The program should use scanf to read the values and terminate when the sum exceeds 999. Do not use goto statement.

#include<stdio.h>
int main() {
    int i, num, sum = 0, count = 0;
    printf("Enter 10 two-digit integers (positive and negative):\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        if (num > 0) {
            sum += num;
            count++;
        }
        if (sum > 999) {
            break;
        }
    }
    printf("Sum of positive values: %d\n", sum);
    printf("Number of positive values added: %d\n", count);
    return 0;
}