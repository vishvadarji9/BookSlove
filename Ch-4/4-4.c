#include <stdio.h>
int main()
{
    float purchasePrice, years, annualDepreciation, salvageValue;
    printf("Enter Purchase Price: ");
    scanf("%f", &purchasePrice);
    printf("Enter Years of Service: ");
    scanf("%f", &years);
    printf("Enter Annual Depreciation: ");
    scanf("%f", &annualDepreciation);
    salvageValue = purchasePrice - (years * annualDepreciation);
    printf("Salvage Value: %.2f\n", salvageValue);
    return 0;
}