//!4-2 Modify the above program to display the two right most digits of the integral part of the number.
#include<stdio.h>
int main()
{
    float num;
    int integralPart;
    printf("Enter a float number: ");
    scanf("%f", &num);
    integralPart = (int)num;
    printf("Two right-most digits: %d\n", integralPart % 100);
    return 0;
}