#include <stdio.h>
int main() {
   int a = 18, b = 9;
   float result;
   result = (float)a / b;
   printf("Result of %d / %d with typecasting: %.2f\n", a, b, result);
   return 0;
}