//! 7. Write a program that prints the value 10.45678 in exponential format with the following specifications:
//! (a) correct to two decimal places;
//! (b) correct to four decimal places; and
//! (c) correct to eight decimal places.

#include <stdio.h>
int main() {
    float num = 10.45678;
    printf("Correct to two decimal places: %.2e\n", num);
    printf("Correct to four decimal places: %.4e\n", num);
    printf("Correct to eight decimal places: %.8e\n", num);
    return 0;
}