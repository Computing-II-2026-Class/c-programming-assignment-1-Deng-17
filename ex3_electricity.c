/* Name: Deng Yak Deng Ater */
/* Student Number: 25/X/BIO/01367/PD */

#include <stdio.h>

int main(void) {
    int units, cost_per_unit;
    float total_bill;
 
    printf("Enter units consumed: ");
    scanf("%d", &units);
 
    printf("Enter cost per unit: ");
    scanf("%d", &cost_per_unit);
 
    total_bill = units * cost_per_unit;
 
    printf("\nTotal bill: %.2f UGX\n", total_bill);

    return 0;
}
