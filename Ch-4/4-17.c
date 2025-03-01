#include <stdio.h>
int main() {
   int num;
   printf("Enter an integer: ");
   scanf("%d", &num);
   int shifted = num << 2;
   printf("Value after shifting left by 2 bits: %d\n", shifted);
   return 0;
}