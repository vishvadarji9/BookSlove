
// 12. The present value (popularly known as book value) of an item is given by the relationship.
// ```
// 				P = pow( (c*(1–d)),n)
// 	where
// 		   c= original cost
// 		   d= rate of depreciation (per year)
// 		   n= number of years
// 		   p= present value after y years.
// ```
// If P is considered the scrap value at the end of useful life of the item, write a program to compute
// the useful life in years given the original cost, depreciation rate, and the scrap value.
// The program should request the user to input the data interactively.

#include <stdio.h>
#include <math.h>
int main() {
    double c, d, p, n;
    printf("Enter the original cost (c): ");
    scanf("%lf", &c);
    printf("Enter the rate of depreciation (d): ");
    scanf("%lf", &d);
    printf("Enter the present value (p): ");
    scanf("%lf", &p);


    n = log(p / c) / log(1 - d);

    printf("The useful life in years is: %.2lf\n", n);
    
    return 0;
}
