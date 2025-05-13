// 8. Write a program to print a table of values of the function
// ```
// y = exp (-x)
// ```
// for x varying from 0.0 to 10.0 in steps of 0.10. The table should appear as follows:
// > Table for Y = EXP(–X)
// >
// | X | 0.1 | 0.2 | 0.3 | ... | 0.9 |
// |---|-----|-----|-----|-----|-----|
// |0.0|	  |     |     |     |     |
// |1.0|	  |     |     |     |     |
// |2.0|	  |     |     |     |     |
// |3.0|	  |     |     |     |     |
// | . |	  |     |     |     |     |
// | . |	  |     |     |     |     |
// | . |	  |     |     |     |     |
// |9.0|	  |     |     |     |     |

#include <stdio.h>
#include <math.h>
int main() {
    float x, y;
    printf("Table for Y = EXP(-X)\n\n");
    for(x = 0.0; x <= 10.0; x += 1.0) {
        printf("X = %.1f: ", x);
        for(float i = 0.1; i <= 0.9; i += 0.1) {
            y = exp(-(x + i));
            printf("%.5f ", y);
        }
        printf("\n");
    }
    return 0;
}





