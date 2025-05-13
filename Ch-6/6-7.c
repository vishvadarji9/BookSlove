// 7. Shown below is a Floyd’s triangle.
// ```
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 .. .. .. 15
// .
// .
// 79 .. .. .. .. .. .. 91
// 	(a) Write a program to print this triangle.
// 	(b) Modify the program to produce the following form of Floyd’s triangle.
// 		1
// 		0 1
// 		1 0 1
// 		0 1 0 1
// 		1 0 1 0 1
// ```

// (a)
// #include <stdio.h>
// int main() {
//     int i, j, num = 1;
//     for (i = 1; i <= 13; i++) {
//         for (j = 1; j <= i; j++) {
//             printf("%d ", num++);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// (b)
#include <stdio.h>
int main() {
    int i, j, num = 1;
    for (i = 1; i <= 13; i++) {
        for (j = 1; j <= i; j++) {  
            printf("%d ", num % 2);
            num++;
        }
        printf("\n");
    }
    return 0;
}







