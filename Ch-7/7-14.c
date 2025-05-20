// 14. Write a program to graph the function
// ```
// 			y = sin (x)
// ```
// in the interval 0 to 180 degrees in steps of 15 degrees. Use the concepts discussed in the Case Study 4 in Chapter 7.

#include <stdio.h>
#include <math.h>
#define PI 3.141
int main() {
    int i;
    double x, y;
    printf("x (degrees)   sin(x)\n");
    printf("-----------------------\n");
    for (i = 0; i <= 180; i += 15) {
        x = i * (PI / 180); 
        y = sin(x);
        printf("%3d          %f\n", i, y);
    }
    return 0;
}