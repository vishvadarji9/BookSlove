//! 4. Write a program that reads 4 floating point values in the range, 0.0 to 20.0, and prints a horizontal barchart to represent these values using the character * as the fill character. For the purpose of the chart,the values may be rounded off to the nearest integer. For example, the value 4.36 should berepresented as follows.
//! *      *     *        *
//! *      *     *        *         4.36
//! *      *     *        *

#include <stdio.h>
#include <math.h>
int main() {
    float nums[4];
    for (int i = 0; i < 4; i++) {
        printf("Enter a number between 0.0 and 20.0: ");
        scanf("%f", &nums[i]);
    }
    for (int i = 0; i < 4; i++) {
        int rounded = (int)round(nums[i]);
        for (int j = 0; j < rounded; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
       