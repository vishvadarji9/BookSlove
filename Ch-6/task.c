// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

#include<stdio.h>
int main(){
    float x1, y1, x2, y2, x3, y3;
    printf("Enter the coordinates of the first point: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter the coordinates of the second point: ");
    scanf("%f %f", &x2, &y2);

    printf("Enter the coordinates of the third point: ");
    scanf("%f %f", &x3, &y3);

    // float slope1 = (y2 - y1) / (x2 - x1);   
    // float slope2 = (y3 - y2) / (x3 - x2);

    float area = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);
    // float area=x1*(y2-y3)+x2*(y3-y1)+x3*



    if(slope1 == slope2){
        printf("All points are on the same line\n");
    }
    else{
        printf("Points are not on the same line\n");
    }
    return 0;
    
}



