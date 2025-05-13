// 10. Write a program to compute the value of Euler’s number e, that is used as the base of natural
// logarithms. Use the following formula.
// ```
// 		e = 1 + 1/1! + 1 /2! + 1 /3! + . . . . . + 1/n!
// ```
// Use a suitable loop construct. The loop must terminate when the difference between two
// successive values of e is less than 0.00001.

#include<stdio.h>
#include<math.h>
int main(){
    double e = 1.0, term = 1.0;
    int n = 1;

    while (term > 0.00001) {
        term /= n; 
        e += term; 
        n++; 
    }

    printf("The value of e is: %.5f\n", e);
    return 0;
}

