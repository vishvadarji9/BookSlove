//! 1. Write a program to determine whether a given number is ‘odd’ or ‘even’ and print the message
//! NUMBER IS EVEN 
//! or 
//! NUMBER IS ODD
//! 	(a) without using else option and
//! 	(b) with else option.
#include<stdio.h>

// a)
// int main(){
//     int number;

//     printf("\nEnter the number: ");
//     scanf("%d", &number);
//     number % 2 == 0 ? printf("\nNumber is EVEN!") : printf("\nNUmber is ODD!");

//     return 0;
// }


// b)
int main(){
    int number;

    printf("\nEnter the number: ");
    scanf("%d", &number);

    if(number % 2 == 0){
        printf("Number is EVEN!!");
    }else{
        printf("Number is ODD!!");
    }

    return 0;
}