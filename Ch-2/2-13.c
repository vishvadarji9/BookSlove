//!2-13 Distance between two points (x 1, y 1) and (x 2, y 2) is governed by the formula
// D2 = ( x2 – x1 )^2 + ( y2 – y1 )^2
// Write a program to compute D given the coordinates of the points.

#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    float D;
    printf("Enter the value of x1 and y1: ");
    scanf("%d %d",&x1,&y1);
    printf("Enter the value of x2 and y2: ");
    scanf("%d %d",&x2,&y2);
    D = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("Distance between (%d,%d) and (%d,%d) is %.2f\n",x1,y1,x2,y2,D);
    return 0;
}