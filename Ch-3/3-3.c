//! 3.3 Write program to count and print the number of negative and positive numbers in a given set of numbers. Test your program with a suitable set of numbers. Use scanf to read the numbers. Reading should be terminated when the value 0 is encountered.

#include <stdio.h>

int main()
{
    int number, pcount = 0, ncount = 0;

    printf("Enter numbers :\n");

    while (1)
    {
        scanf("%d", &number);

        if (number == 0)
        {
            break;
        }

        if (number > 0)
        {
            pcount++;
        }
        else
        {
            ncount++;
        }
    }

    printf("\nNumber of positive numbers: %d\n", pcount);
    printf("Number of negative numbers: %d\n", ncount);

    return 0;
}