#include <stdio.h>
#include <math.h>
int main()
{
    float demand_rate, setup_cost, holding_cost, EOQ, TBO;
    printf("Enter demand rate (items per unit time): ");
    scanf("%f", &demand_rate);
    printf("Enter setup cost per order: ");
    scanf("%f", &setup_cost);
    printf("Enter holding cost per item per unit time: ");
    scanf("%f", &holding_cost);
    EOQ = sqrt((2 * demand_rate * setup_cost) / holding_cost);
    TBO = sqrt((2 * setup_cost) / (demand_rate * holding_cost));
    printf("EOQ: %.2f\n", EOQ);
    printf("TBO: %.2f\n", TBO);
    return 0;
}