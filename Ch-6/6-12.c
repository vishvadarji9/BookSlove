// 12. An electricity board charges the following rates for the use of electricity:
// ```
// For the first 200 units: 80 P per unit
// For the next 100 units: 90 P per unit
// Beyond 300 units: Rs 1.00 per unit
// ```
// All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more than Rs.400, 
// then an additional surcharge of 15% of total amount is charged.
// Write a program to read the names of users and number of units consumed and print out the
// charges with names.

#include<stdio.h>
int main(){
    char name[50];
    int units;
    float amount, surcharge, total_amount;

    printf("Enter the name of the user: ");
    scanf("%s", name);
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if(units <= 200){
        amount = units * 0.80;
    }
    else if(units <= 300){
        amount = 200 * 0.80 + (units - 200) * 0.90;
    }
    else{
        amount = 200 * 0.80 + 100 * 0.90 + (units - 300) * 1.00;
    }
    total_amount = amount + 100;
    if(total_amount > 400){
        surcharge = 0.15 * total_amount;
        total_amount += surcharge;
    }
    printf("User: %s\n", name);
    printf("Total amount to be paid: Rs. %.2f\n", total_amount);
    return 0;
        
}