// 17. Write a C program to input two numbers a and b and display whether
// ```
// (a) a is greater than b
// (b) b is greater than b
// (c) or, a and b are equal
// ```

#include<stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a>b){
        printf("a is greater than b\n");
    }
    else if(b>a){
        printf("b is greater than a\n");
    }
    else{
        printf("a and b are equal\n");
    }
    return 0;
    
}
