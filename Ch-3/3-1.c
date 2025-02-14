//!3.1 Write a program  to determine and print the sum of the following series for a given value of n: 1+1/2+1/3+...+1/n
#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    float f;
    printf("Enter the value of n:");
    scanf("%d", &n);

    for (float i = 1; i <= n; i++)
    {
       f = f + 1 / i;
    }
    printf("sum is:%.2f", f);

    return 0;
}








