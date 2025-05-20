// 19. Write a C program to display the following pattern:
//               1
//             1 2 1
//           1 2 3 2 1
//             1 2 1
//               1

#include <stdio.h>
int main()
{
    int i, j;
    int digits = 1;
    char letter = 'A';
    int n;
    scanf("%d", &n);

    for (i=0; i<n/2; i++) {
        for (j=0; j<(5-i); j++) printf("\t");
        for (j=1; j<=i + 1; j++) printf("%d\t", j);
        for (j=j-2; j>=1; j--) printf("%d\t", j);
        printf("\n");
    }

    for (i=n/2; i>=0; i--) {
        for (j=0; j<(5-i); j++) printf("\t");
        for (j=1; j<=i + 1; j++) printf("%d\t", j);
        for (j=j-2; j>=1; j--) printf("%d\t", j);
        printf("\n");
    }
}