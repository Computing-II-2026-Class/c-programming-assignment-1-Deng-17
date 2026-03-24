/* Name: Deng Yak Deng Ater */
/* Student Number: 25/X/BIO/01367/PD */

#include <stdio.h>

int main(void) {
    int amount;
    float feePercent, feeAmount, totalDeducted;
    
    printf("Enter amount to send: ");
    scanf("%d", &amount);

    printf("Enter transaction fee(%%): ");
    scanf("%f", &feePercent);

    feeAmount = (feePercent / 100) * amount;
    totalDeducted = amount + feeAmount;

    printf("\nTransaction fee: %.2f UGX\n", feeAmount);
    printf("Total amount deducted: %.2f UGX\n", totalDeducted);

    return 0;
}
