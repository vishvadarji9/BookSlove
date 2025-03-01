#include<stdio.h>
void main(){
    int num1,num2,num3,sum=0,avg,largest,smallest;
    printf("Enter three integers (num1, num2 and num3): ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum=num1+num2+num3;
    avg=sum/3;
    printf("Sum of %d, %d and %d is %d\n",num1,num2,num3,sum);
    printf("Average of %d, %d and %d is %d\n",num1,num2,num3,avg);
    printf("Largest of : %d\n", (num1 > num2 && num1 > num3) ? num1 : (num2 > num3) ? num2 : num3);
    printf("Smallest: %d\n", (num1 < num2 && num1 < num3) ? num1 : (num2 < num3) ? num2 : num3);
}