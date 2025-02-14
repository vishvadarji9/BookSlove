//!2.9 Write a program using one print statement to print the pattern of asterisks as shown below:

//         *
//         *  *
//         *  *  *
//         *  *  *  * 

#include<stdio.h>
#include <stdio.h>
int main()
{
    int Row;
    printf("Enter the number of rows: ");
    scanf("%d", &Row);
    for (int i = 1; i <= Row; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*\t");
        }
        printf("\n");
    }
}