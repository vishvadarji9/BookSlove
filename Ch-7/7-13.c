// 13. Write a program to print a square of size 5 by using the character N as shown below:
// ```
// 	 (a)								(b)
// 		n n n n n 							n n n n n
// 		n n n n n							n       n 
//  	n n n n n							n       n 
// 		n n n n n 							n       n
// 		n n n n n							n n n n n 	
// ```
// > n is used insted of S in the above figure LOL. 

#include <stdio.h>
int main() {
    int i, j;
    char ch = 'n'; 


    printf("Part (a):\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }


    printf("\nPart (b):\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == 0 || i == 4 || j == 0 || j == 4) {
                printf("%c ", ch);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}