//! 6. Write a program to print a two-dimensional Square Root Table as shown below, to provide the square
//! root of any number from 0 to 9.9. For example, the value x will give the square root of 3.2 and y the
//! square root of 3.9.
//! > Square Root Table
//! >
//! | number | 0.0 | 0.1 | 0.2 | ... | 0.9 |
//! |--------|-----|-----|-----|-----|-----|
//! | 0.0    |     |     |     |     |     |
//! | 0.1    |     |     |     |     |     |
//! | 0.2    |     |     |     |     |     |
//! | 0.3    |     |     |  x  |     |  y  |
//! | ...    |     |     |     |     |     |
//! | 0.9    |     |     |     |     |     |

#include <stdio.h>
#include <math.h>

int main() {
    float row, col;
    int i, j;

    printf("Square Root Table:\n\n");

    printf("number |");
    for (j = 0; j < 10; j++) {
        printf(" %.1f |", j * 0.1);
    }
    printf("\n");

    printf("--------");
    for (j = 0; j < 10; j++) {
        printf("------");
    }
    printf("\n");

    for (i = 0; i < 10; i++) {
        row = i * 1;
        printf(" %.1f   |", row);
        for (j = 0; j < 10; j++) {
            col = j * 0.1;
            printf(" %.2f|", sqrt(row + col));
        }
        printf("\n");
    }

    return 0;
}



