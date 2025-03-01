#include <stdio.h>
#include <math.h>

int main()
{
    printf("X (degrees)\tSin(X)\t\tCos(X)\n");

    for (int i = 0; i <= 180; i += 15)
    {
        double rad = i * 3.14 / 180;
        printf("%d\t\t%.4f\t\t%.4f\n", i, sin(rad), cos(rad));
    }
    return 0;
}