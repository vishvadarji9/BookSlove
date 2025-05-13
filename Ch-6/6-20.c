// 20. Write a C program that inputs a string and counts the number of capital and small alphabets in that
// string.

#include<stdio.h>
int main(){
    char str[100];
    int i, capital = 0, small = 0;

    printf("Enter a string:");
    scanf("%s",str);

    for (i=0; str[i] != '\0'; i++){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            capital++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z'){
            small++;
        }
    }

    printf("Number of capital letters: %d\n", capital);
    printf("Number of small letters: %d\n", small);
    return 0;
}