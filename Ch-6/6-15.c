// 15. Write a program to read a double-type value x that represents angle in radians and a character-type
// variable T that represents the type of trigonometric function and display the value of
// ```
// (a) sin(x), if s or S is assigned to T,
// (b) cos (x), if c or C is assigned to T, and
// (c) tan (x), if t or T is assigned to T
// ```
// using, (i) if......else statement , and (ii) switch statement.

#include<stdio.h>
#include<math.h>
int main(){
    double x;
    char T;

    printf("Enter the angle in radians: ");
    scanf("%lf", &x);

    printf("Enter the type of trigonometric function (s/S, c/C, t/T): ");
    scanf(" %c", &T);

    if(T == 's' || T == 'S'){
        printf("sin(%.2f) = %.4f\n", x, sin(x));
    }
    else if(T == 'c' || T == 'C'){
        printf("cos(%.2f) = %.4f\n", x, cos(x));    
    }
    else if(T == 't' || T == 'T'){
        printf("tan(%.2f) = %.4f\n", x, tan(x));
    }
    else{
        printf("Invalid input.\n");
    }
    return 0;
    
}
