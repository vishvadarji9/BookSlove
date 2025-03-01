 #include <stdio.h>
 int main() {
    int a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b || b == c || a == c) {
        printf("The triangle is isosceles\n");
    } else {
        printf("The triangle is not isosceles\n");
    }
    
    return 0;
 }