//! 14. Write a C program to display the following pattern.
//!             5 4 3 2 1
//!               4 3 2 1
//!                 3 2 1
//!                   2 1
//!                     1
#include <stdio.h>
int main() {
    int i, j;
    for (i = 5; i >= 1; i--) {
        for (j = 5; j > i; j--) {
            printf("  ");
        }
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
