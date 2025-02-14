//!2.3 Write a program to output the following multiplication table
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter value of a:");
    scanf("%d",&a);
    for (int i = 1; i <10; i++)
    {
        printf("%d * %d = %d\n",a,i,(a*i));
    }

}
