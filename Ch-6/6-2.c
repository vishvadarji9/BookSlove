//! 2. Write a program to find the number of and sum of all integers greater than 100 and less than 200 thatare divisible by 7.

#include<stdio.h>
int main(){
    int i, count = 0, sum = 0;
    for(i = 101; i < 200; i++){
        if(i % 7 == 0){
            count++;
            sum += i;
        }
    }
    printf("\nCount of numbers divisible by 7 between 100 and 200: %d", count);
    printf("\nSum of numbers divisible by 7 between 100 and 200: %d", sum);
    return 0;
}