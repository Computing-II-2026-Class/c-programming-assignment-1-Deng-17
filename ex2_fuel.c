/* Name: Deng Yak Deng Ater */
/* Student Number: 25/X/BIO/01367/PD */

#include <stdio.h>

int main(void) {
    float distance, fuel, efficiency;
 
    printf("Enter distance (km): ");
    scanf("%f", &distance);
 
    printf("Enter fuel used (litres): ");
    scanf("%f", &fuel);
 
    efficiency = distance / fuel;
 
    printf("\nFuel efficiency: %.2f km/l\n", efficiency);

    return 0;
}
