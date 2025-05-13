// 8. A cloth showroom has announced the following seasonal discounts on purchase of items:
// >
// | Purchase amount | Discount   |                |
// |-----------------|------------|----------------|
// |                 | Mill cloth | Handloom items |
// | 0 - 100         | ...        | 5%             |
// | 101 - 200       | 5%         | 7.5%           |
// | 201 - 300       | 7.5%       | 10%            |
// | Above 300       | 10%        | 15%            |
// >
// Write a program using switch and if statements to compute the net amount to be paid by a customer

#include <stdio.h>
int main() {
    float amount, discount = 0, net;
    char type;

    printf("Enter purchase amount: ");
    scanf("%f", &amount);
    printf("Enter item type (M for Mill, H for Handloom): ");
    scanf(" %c", &type);

    switch (type) {
        case 'M':
        case 'm':
            if (amount > 300) discount = 0.10;
            else if (amount > 200) discount = 0.075;
            else if (amount > 100) discount = 0.05;
            break;
        case 'H':
        case 'h':
            if (amount > 300) discount = 0.15;
            else if (amount > 200) discount = 0.10;
            else if (amount > 100) discount = 0.075;
            else discount = 0.05;
            break;
        default:
            printf("Invalid type\n");
            return 1;
    }

    net = amount - (amount * discount);
    printf("Net amount to be paid: %.2f\n", net);
    return 0;
}


