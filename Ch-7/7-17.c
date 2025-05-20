// 17. Write a C program to display a coloured line.

// #include <stdio.h>
// int main() {
//     int i;
//     printf("  \033[1;31m"); 
//     for (i = 0; i < 50; i++) {
//         printf("*");
//     }
//     printf("\033[0m\n"); 
//     return 0;
// }

#include <stdio.h>
#include <windows.h>

int main() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 4); // Red
    printf("This is a red colored line.\n");
    SetConsoleTextAttribute(h, 7); // Reset
    return 0;
}