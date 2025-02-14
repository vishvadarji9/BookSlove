//!3.10 Write a C program to input the value od days and convert in into years,weeks and days.
#include<stdio.h>
#include<conio.h>
int main(){
    int days,years,weeks;
    printf("Enter the days:");
    scanf("%d",&days);

    years = days/365; 
    weeks = (days % 365)/7; 
    days = days - ((years*365) + (weeks*7));

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d \n", days);
    return 0;
}