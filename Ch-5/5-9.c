//! 9. Write a program to read the name ANIL KUMAR GUPTA in three parts using the scanf statement and
//! to display the same in the following format using the printf statement.
//! (a) ANIL K. GUPTA
//! (b) A.K. GUPTA
//! (c) GUPTA A.K.
#include <stdio.h>

int main() {
    char f[10], m[10], l[10];
    printf("Enter full name (First Middle Last): ");
    scanf("%s %s %s", f, m, l);

    printf("%s %c. %s\n", f, m[0], l);
    printf("%c.%c. %s\n", f[0], m[0], l);
    printf("%s %c.%c.\n", l, f[0], m[0]);

    return 0;
}


