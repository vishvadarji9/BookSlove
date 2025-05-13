//7-4). Write a program to evaluate the following investment equation
// ```
// 				V = P(1+r) n
// ```
// and print the tables which would give the value of V for various combination of the following values 
// of P, r, and n.
// P : 1000, 2000, 3000,........, 10,000
// r : 0.10, 0.11, 0.12, ......., 0.20
// n : 1, 2, 3, ...., 10
// ( Hint: P is the principal amount and V is the value of money at the end of n years. This equation can
// be recursively written as
// ```
// 	V = P(1+r)
// 	P = V
// ```
// That is, the value of money at the end of first year becomes the principal amount for the next year and
// so on.)

#include <stdio.h>
#include <math.h>
int main() {
    float P, r, V;
    int n;
    for(P = 1000; P <= 10000; P += 1000) {
        for(r = 0.10; r <= 0.20; r += 0.01) {
            for(n = 1; n <= 10; n++) {
                V = P * pow(1 + r, n);
                printf("P=%.0f r=%.2f n=%d => V=%.2f\n", P, r, n, V);
            }
        }
    }
    return 0;
}


