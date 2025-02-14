
//! 3.5 Write a program to illustrate the use of typedef declaration in a program.

#include <stdio.h>
typedef int Age;       
typedef float Salary;  

int main() {
    Age personAge = 21;
    Salary personSalary = 90000.50;

    printf("Age: %d\n", personAge);
    printf("Salary: Rs %.2f\n", personSalary);

    return 0;
}