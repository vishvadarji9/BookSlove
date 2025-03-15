//! 1. Given the string “WORDPROCESSING”, write a program to read the string from the terminal and
//! display the same in the following formats:
//! ```
//! (a) WORD PROCESSING
//! (b) WORD
//! PROCESSING
//! (c) W.P.

#include <stdio.h>

int main() {
    char str[] = "WORDPROCESSING";
    
    // (a) WORD PROCESSING
    printf("%c%c%c%c %s\n", str[0], str[1], str[2], str[3], str + 4);

    // (b) WORD\nPROCESSING
    printf("WORD\nPROCESSING\n");

    // (c) W.P.
    printf("%c.%c.\n", str[0], str[4]);

    return 0;
}
