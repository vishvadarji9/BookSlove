// 14. Write an interactive program that could read a positive integer number and decide whether the
// number is a prime number and display the output accordingly.
// Modify the program to count all the prime numbers that lie between 100 and 200.
// > NOTE : A prime number is a positive integer that is divisible only by 1 or by itself.

#include<stdio.h>
int main(){
    int num, isPrime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if(num <= 1){
        isPrime = 0;
    }
    else{
        for(int i = 2; i * i <= num; i++){
            if(num % i == 0){
                isPrime = 0;
                break;
            }
        }
    }
    
    if(isPrime){
        printf("%d is a prime number.\n", num);
    }
    else{
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}
