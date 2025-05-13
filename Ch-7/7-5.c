// 5. Write programs to print the following outputs using for loops.
// 	(a) 			         (b)
//         1                       * * * * * 
//         2 2                       * * * *
//         3 3 3                       * * *
//         4 4 4 4                       * *
//         5 5 5 5 5                       *

// (a)
// #include <stdio.h>
// int main() {
//     int i, j;
//     for(i = 1; i <= 5; i++) {
//         for(j = 1; j <= i; j++)
//             printf("%d ", i);
//         printf("\n");
//     }
//     return 0;
// }


// (b)
#include <stdio.h>
int main() {
    int i, j;
    for(i = 0; i <=5; i++) {
        for(j = 0; j < i; j++) {
            printf("  ");
        }
        for(j = 5 - i; j > 0; j--) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


