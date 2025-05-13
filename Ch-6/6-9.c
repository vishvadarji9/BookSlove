// 9. Write a program that will read the value of x and evaluate the following function,
// ```
// 		    1  for x>0
// 		y=  0  for x=0
// 		   -1  for x<0
// ```
// using,
// ```
// 	(a) nested if statements,
// 	(b) else if statements, and
// 	(c) conditional operator ? :

// (a)
#include <stdio.h>
int main() {
    int x;
    printf("Enter the value of x: ");    
    scanf("%d", &x);

    if (x > 0) {
        printf("1");
    }                        
    if (x == 0) {
        printf("0");
    }
    if (x < 0) {
        printf("-1");
    }
    return 0;
}



// (b)
// #include <stdio.h>
// int main() {
//     int x;
//     printf("Enter the value of x: ");            
//     scanf("%d", &x);

//     if (x > 0) {
//         printf("1");
//     } else if (x == 0) {
//         printf("0");
//     } else {
//         printf("-1");
//     }            
//     return 0;
// }

// (c)
// #include <stdio.h>
// int main() {
//     int x;
//     printf("Enter the value of x: ");
//     scanf("%d", &x);
//     printf("%d", x > 0 ? 1 : x == 0 ? 0 : -1);
//     return 0;
// }
