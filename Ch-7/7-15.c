// 15. Modify the program of Exercise 7.16 to print the character S instead of N at the center of the square as shown below.
// ```
// 				n n n n n 							
// 				n n n n n						 
//  			n n s n n							
// 				n n n n n 						
// 				n n n n n	
// ```
// > n is used insted of S in the above figure LOL. 

#include <stdio.h>
int main() {
    int i, j;
    int n = 5; 
    char c = 'n'; 
    char centerChar = 's'; 

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == n / 2 && j == n / 2) {
                printf("%c ", centerChar); 
            } else {
                printf("%c ", c); 
            }
        }
        printf("\n");
    }
    return 0;
}
