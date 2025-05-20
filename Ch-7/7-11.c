// 11. Write programs to evaluate the following functions to 0.0001% accuracy.
// (a) sinx = x – x 3 /3! + x 5 /5! – x 7 /7! + . . . . . .
// (b) cosx = 1 – x 2 /2! + x 4 /4! – x 6 /6! + . . . . .
// (c) SUM = 1 + (1/2) 2 + (1/3) 3 + (1/4) 4 + … …


#include <stdio.h>
int main(){
    double x, sinx, cosx, term;
    int n = 1;
    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);
    
  
    sinx = x; 
    term = x; 
    while (term > 0.0001 || term < -0.0001) {
        term *= -x * x / ((2 * n) * (2 * n + 1));
        sinx += term;
        n++;
    }
    
    printf("sin(%lf) = %lf\n", x, sinx);
    
    n = 1;
    cosx = 1; 
    term = 1;
    while (term > 0.0001 || term < -0.0001) {
        term *= -x * x / ((2 * n - 1) * (2 * n)); 
        cosx += term;
        n++;
    }
    
    printf("cos(%lf) = %lf\n", x, cosx);
    
    return 0;
}