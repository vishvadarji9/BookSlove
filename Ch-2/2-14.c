//!2-14 A point on the circumference of a circle whose center is (o, o) is (4,5). Write a program to compute perimeter and area of the circle. (Hint: use the formula given in the Ex. 2.11)
#include <math.h>
#include <stdio.h>
#define PI 3.14
int main()
{
    int x1, x2, y1, y2;
    float P, A, r;
    x1 = 0;
    y1 = 0;
    x2 = 4;
    y2 = 5;
    r = (float)sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    P = 2 * PI * r;
    A = PI * r * r;
    printf("The area of the circle is : %.2f\n", A);
    printf("The perimeter of the circle is : %.2f", P);
    return 0;
}