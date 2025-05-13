// 10. Write a program to compute the real roots of a quadratic equation
// ```
// 				ax 2 + bx + c = 0
// ```
// The roots are given by the equations
// ```
// 		x1 = -b + sqrt ( b*b - 4*a*c) / 2*a
// 		x2 = -b - sqrt (b*b + 4*a*c) / 2*a
// ```
// The program should request for the values of the
// constants a, b and c and print the values of x 1 and x 2.
//  Use the following rules:
// ```
// (a) No solution, if both a and b are zero
// (b) There is only one root, if a = 0 (x = –c/b)
// (c) There are no real roots, if b 2 – 4 ac is negative
// (d) Otherwise, there are two real roots
// ```
// Test your program with appropriate data so that all logical paths are working as per your design.
// Incorporate appropriate output messages.

#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c, x1, x2, discriminant;
    printf("Enter the coffecients a,b,c of the quadratic equation ax^2 + bx + c = 0: ");
    scanf("%f %f %f", &a, &b, &c);
  
  if(a==0 && b==0){
    printf("No solution");  
  }
  else if(a==0){
    x1 = -c/b;
    printf("There is only one root: %.2f", x1);
  }
  else{
    discriminant = b*b - 4*a*c;
    if(discriminant < 0){
        printf("There are no real roots");
    }
    else if(discriminant == 0){
        x1 = -b/(2*a);
        printf("There is only one root: %.2f", x1);
    }
    else{
        x1 = (-b + sqrt(discriminant))/(2*a);
        x2 = (-b - sqrt(discriminant))/(2*a);
        printf("There are two real roots: %.2f and %.2f", x1, x2);
    }
  }
  return 0;
}