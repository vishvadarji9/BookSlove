// 20. Write a C program to display the following pattern:
// 		1
// 		0 1
// 		1 0 1
// 		0 1 0 1

#include <stdio.h>
int main(){
    int i, j, n = 4; 
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", (i + j) % 2); 
        }
        printf("\n");
    }
    return 0;
}