//! 10. Write a program to read and display the following table of data.
//!           Name            Code             Price
//!           Fan             67831            1234.50
//!           Motor           450              5786.70

#include <stdio.h>
#include <string.h>

#define MAX 100  
int main() {
    char name[MAX][20];
    int code[MAX];
    float price[MAX];
    int count = 0;

    printf("Enter product details (Type 'exit' as Name to stop):\n");

    while (count < MAX) {
        printf("\nEnter Product Name: ");
        scanf("%s", name[count]);

        if (strcmp(name[count], "exit") == 0)
            break; 

        printf("Enter Product Code: ");
        scanf("%d", &code[count]);

        printf("Enter Product Price: ");
        scanf("%f", &price[count]);

        count++;
    }

    printf("\n%-15s %-10s %10s\n", "Name", "Code", "Price");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%-15s %-10d %10.2f\n", name[i], code[i], price[i]);
    }

    return 0;
}

