#include <stdio.h>
#include <math.h>

int main()
{
    float L, R, C, frequency;
    printf("Enter inductance (L): ");
    scanf("%f", &L);
    printf("Enter resistance (R): ");
    scanf("%f", &R);
    printf("C\tFrequency\n");
    for (C = 0.01; C <= 0.1; C += 0.01)
    {
        frequency = sqrt((1 / (L * C)) - ((R * R) / (4 * C * C)));
        printf("%.2f\t%.2f\n", C, frequency);
    }
    return 0;
}