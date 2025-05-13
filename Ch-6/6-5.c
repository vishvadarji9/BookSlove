//! 5. Admission to a professional course is subject to the following conditions:
//! (a) Marks in Mathematics >= 60
//! (b) Marks in Physics >= 50
//! (c) Marks in Chemistry >= 40
//! (d) Total in all three subjects >= 200
//! or,
//! Total in Mathematics and Physics >= 150 Given the marks in the three subjects, write a
//! program to process the applications to list the eligible candidates.

#include <stdio.h>
int main()
{
    int math, phy, chem, total; 
    printf("\nEnter the marks in Mathematics: ");
    scanf("%d", &math);
    printf("\nEnter the marks in Physics: ");
    scanf("%d", &phy);
    printf("\nEnter the marks in Chemistry: ");
    scanf("%d", &chem);

    total = math + phy + chem;

    if ((math >= 60) && (phy >= 50) && (chem >= 40) && (total >= 200))
    {
        printf("\nYou are eligible for admission!!");
    }
    else if ((math + phy) >= 150)
    {
        printf("\nYou are eligible for admission!!");
    }
    else
    {
        printf("\nYou are not eligible for admission!!");
    }

    return 0;
}

