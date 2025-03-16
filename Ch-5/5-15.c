//! 15. Write a C program to input an investment amount and compute its fixed deposit cumulative returnafter 10 years at arate of interest of 8.75%.

#include <stdio.h>
int main() {
    float investment, interest, total;
    printf("Enter the investment amount: ");
    scanf("%f", &investment);
    interest = investment * 8.75 / 100;
    total = investment + interest;
    printf("The fixed deposit cumulative return after 10 years at a rate of interest of 8.75%% is %.2f\n", total);
    return 0;
}