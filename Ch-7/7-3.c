// 7-3. The numbers in the sequence
// ```
// 	1 1 2 3 5 8 13 21 .......
// ```
// are called Fibonacci numbers. Write a program using a do....while loop to calculate and print the first m
// Fibonacci numbers.
#include <stdio.h>
int main() {
    int m, a = 1, b = 1, next, count = 2;
    printf("Enter number of terms: ");
    scanf("%d", &m);
    printf("%d %d ", a, b);
    do {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
        count++;
    } while(count < m);
    return 0;
}
