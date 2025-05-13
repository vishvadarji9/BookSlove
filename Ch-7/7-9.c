// 9. Write a program using for and if statement to display the capital letter S in a grid of 15 rows and
// 18 columns as shown below.
// ******************
// **--------------**
// *********-------**
// ****
// ****
// ****
// *****---------****
// --------------****
// --------------****
// --------------****
// --------------****
// --------------****
// --------------****
// ****----------****
// ***-----------****
// **------------****

#include<stdio.h>

void main() {
    int rows = 15;
    int cols = 18;
    int i, j, k;

    for (i = 0; i < cols; i++) {
        printf("*");
    }
    printf("\n");

    for (i = 0; i < cols; i++) {
        if(i < 2 || i > 15) printf("*");
        else printf("_");
    }
    printf("\n");

    for (i = 0; i < cols; i++) {
        if(i < 9 || i > 15) printf("*");
        else printf("_");
    }
    printf("\n");
    
    for(k = 0; k < 3; k++) {
        for (i = 0; i < cols; i++) {
            if(i < 4) printf("*");
        }
        printf("\n");
    }

    for (i = 0; i < cols; i++) {
        if(i < 5 || i > 13) printf("*");
        else printf("_");
    }
    printf("\n");

    for(k=0; k<5; k++) {
        for (i = 0; i < cols; i++) {
            if(i > 13) printf("*");
            else printf("_");
        }
        printf("\n");
    }

    for (k = 0; k < 3; k++) {
        for (i = 0; i < cols; i++) {
            if(i < 4-k || i > 13) printf("*");
            else printf("_");
        }
        printf("\n");
    }
}



