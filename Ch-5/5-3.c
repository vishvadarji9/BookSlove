//! 3. Write a program to read the following numbers, round them off to the nearest integers and print out the results in integer form: 35.7 50.21 – 23.73 – 46.45

// #include <stdio.h>
// #include <math.h>
// int main() {
//     float num1 = 35.7, num2 = 50.21, num3 = -23.73, num4 = -46.45;
//     printf("Rounded off values: %d %d %d %d\n", (int)round(num1), (int)round(num2), (int)round(num3), (int)round(num4));
//     return 0;
// }

#include <stdio.h>
#include <math.h>

int main() {
    float nums[] = {35.7, 50.21, -23.73, -46.45};
    for (int i = 0; i < 4; i++)
        printf("%d ", (int)round(nums[i]));
    printf("\n");

    return 0;
}
