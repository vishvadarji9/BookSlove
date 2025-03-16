//! 11. Write a C program to print inventory stock report using some sample data. The report should show item code, quantity and inventory location as formatted output.

#include <stdio.h>

int main() {
    printf("%-10s %-10s %-15s\n", "Item", "Qty", "Location");
    printf("%-10s %-10d %-15s\n", "Laptop", 50, "Warehouse 1");
    printf("%-10s %-10d %-15s\n", "Mouse", 200, "Shelf A");
    return 0;
}
