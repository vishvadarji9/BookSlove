//!2-15 The line joining the points (2,2) and (5,6) which lie on the circumference of a circle is the diameter of the circle. Write a program to compute the area of the circle.
#include <math.h>
#include <stdio.h>
int main()
{
    int x1, x2, y1, y2;
    float area, diameter, r;
    x1 = 2;
    y1 = 2;
    x2 = 5;
    y2 = 6;
    diameter = (float)sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    r = diameter / 2;
    area = 2 * 3.14 * r;
    printf("The area of circle is : %.2f", area);
    return 0;
}