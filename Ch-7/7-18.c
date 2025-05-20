// 18. Write a C program to display the following pattern.

//             1
//            A B
//           2 3 4
//          C D E F
//         5 6 7 8 9


#include <stdio.h>
int main()
{
    int i, j;
    int digits = 1;
    char letter = 'A';
    int n;
    scanf("%d", &n);

    for (i=0; i<n; i++) {
        for (j=0; j<(5-i); j++) {
            printf(" ");
        }
        for (j=0; j<=i; j++) {
            if (i%2 == 0) {
                printf("%d ", digits++);
            } else {
                printf("%c ", letter++);
            }
        }
        printf("\n");
    }
}

