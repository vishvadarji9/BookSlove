#include <stdio.h>
#include <math.h>
int main()
{
    printf("Number\tSquare-root\tSquare\n");
    for (int i = 0; i <= 100; i += 10)
    {
        printf("%d\t%.2f\t\t%d\n", i, sqrt(i), i * i);
    }
    return 0;
}