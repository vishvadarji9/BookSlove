//!2-12 Write a program to display the following simple arithmetic calculator
//        x=                  y=
//        sum                 Difference=
//        Product=            Division=

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of x and y: ");
    scanf("%d %d",&x,&y);
    printf("x=%d\t\ty=%d\n",x,y);
    printf("Sum=%d\t\tDifference=%d\n",x+y,x-y);
    printf("Product=%d\tDivision=%d\n",x*y,x/y);
    return 0;
}