//! 8. Write a program to print the value 345.6789 in fixed-point format with the followingspecifications:
//! (a) correct to two decimal places;
//! (b) correct to five decimal places; and
//! (c) correct to zero decimal places.

#include <stdio.h>
int main() {
    float num = 345.6789;
    printf("Correct to two decimal places: %.2f\n", num);
    printf("Correct to five decimal places: %.5f\n", num);
    printf("Correct to zero decimal places: %.0f\n", num);
    return 0;
}