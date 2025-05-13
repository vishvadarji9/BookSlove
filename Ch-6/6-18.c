// 18. Write a C program to input the total percentage of marks of a student and display its Division using
// below rules:
// ```
// (a) Greater than or equal to 80 percent - “First Division”
// (b) Greater than or equal to 60 percent and less than 80 per cent - “Second Division”
// (c) Less than 60 percent - “Third Division"
// ```

#include<stdio.h>
int main(){
    float percentage;
    printf("Enter the total percentage of marks: ");
    scanf("%f", &percentage);
    
    if(percentage >= 80){
        printf("First Division\n");
    }
    else if(percentage >= 60 && percentage < 80){
        printf("Second Division\n");
    }   
    else{
        printf("Third Division\n");
    }
    return 0;
    
    
}
