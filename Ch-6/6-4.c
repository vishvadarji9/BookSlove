//! 4. Given a list of marks ranging from 0 to 100, write a program to compute and print the number of
//! students:
//! (a) who have obtained more than 80 marks,
//! (b) who have obtained more than 60 marks,
//! (c) who have obtained more than 40 marks,
//! (d) who have obtained 40 or less marks,
//! (e) in the range 81 to 100,
//! (f) in the range 61 to 80,
//! (g) in the range 41 to 60, and
//! (h) in the range 0 to 40.
//! The program should use a minimum number of if statements.

#include<stdio.h>
int main() {

    int marks[10], count[8] = {0};

    printf("\nEnter marks of 10 students!!\n\n ");
    for(int i = 0; i < 10; i++){
        printf("\nEnter the marks of student %d: ", i+1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 10; i++){
        if (marks[i] > 80){
            count[0]++;
        }if(marks[i] > 60){
            count[1]++;
        }if(marks[i] > 40){
            count[2]++;
        }if(marks[i] <= 40){
            count[3]++;
        } 
        if(marks[i] >= 81 && marks[i] <= 100){
            count[4]++;
        }
        if(marks[i] >= 61 && marks[i] <= 80){
            count[5]++;
        }
        if(marks[i] >= 41 && marks[i] <= 60){
            count[6]++;
        }
        else{
            count[7]++;
        }
    }
 
    printf("\nNumber of students who have obatained marks more than 80: %d" , count[0]);
    printf("\nNumber of students who have obatained marks more than 60: %d" , count[1]);
    printf("\nNumber of students who have obatained marks more than 40: %d" , count[2]);
    printf("\nNumber of students who have obatained 40 or less marks: %d" , count[3]);
    printf("\nNumber of students who have obatained marks in the range 81 to 100: %d" , count[4]);
    printf("\nNumber of students who have obatained marks in the range 61 to 80: %d" , count[5]);
    printf("\nNumber of students who have obatained marks in the range 41 to 60: %d" , count[6]);
    printf("\nNumber of students who have obatained marks in the range 0 to 40: %d" , count[7]);

    return 0;
}