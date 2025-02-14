//!3.2  The price of one kg of rice is Rs.16.75 and one kg of sugar is 15. Write a program to get these values from user and display the price as follows:
//! *** LIST OF ITEMS ***
//! Item    Price
//! Rice    Rs 16.75
//! Sugar   Rs 15.00

#include <stdio.h>

int main() {
    float ricePrice, sugarPrice;

    printf("Enter the price of 1 kg of rice: Rs ");
    scanf("%f", &ricePrice);
    printf("Enter the price of 1 kg of sugar: Rs ");
    scanf("%f", &sugarPrice);

    printf("\n*** LIST OF ITEMS ***\n");
    printf("Item   \tPrice\n");
    printf("Rice   \tRs %.2f\n", ricePrice);
    printf("Sugar  \tRs %.2f\n", sugarPrice);

    return 0;
}