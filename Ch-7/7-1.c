// 7-1)Given a number, write a program using while loop to reverse the digits of the number. For example,
// the 
// ```
// number 
// 	12345 
// should be written as 
// 	54321

#include <stdio.h>
int main() {
    int num, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed number: %d\n", rev);
    return 0;
}

