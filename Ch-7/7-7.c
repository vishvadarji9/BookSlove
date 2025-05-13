// 7. Rewrite the program of case study 7.4 (plotting of two curves) using else...if constructs instead of
// continue statements.

#include <stdio.h>
int main()
{
    int x;
    for (x = 1; x <= 10; x++)
    {
        if (x <= 5)
        {
            printf("Linear: x = %d, y = %d\n", x, x);
        }

        else if (x > 5)
        {
            printf("Quadratic: x = %d, y = %d\n", x, x * x);
        }
    }
    return 0;
}
