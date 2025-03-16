//! 13. Write a C program to input a currency value in Dollars and display its equivalent Euro andINR amounts. You may use current exchange rate for conversion purpose.
#include <stdio.h>
int main() {
    float dollar, euro, inr;
    printf("Enter amount in Dollars: ");
    scanf("%f", &dollar);
    euro = dollar * 0.85;
    inr = dollar * 73.5;
    printf("Equivalent Euro: %.2f\n", euro);
    printf("Equivalent INR: %.2f\n", inr);
    return 0;
}