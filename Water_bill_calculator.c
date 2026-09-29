/*
Program to calculate water bill
Author: Michael
Total bill = units consumed * charge per unit
Date: 26/09/2026
*/

#include <stdio.h>

int main() {

    float units_consumed, charge_per_unit, Total_bill;

    printf("Enter water units consumed: ");
    scanf("%f", &units_consumed);

    if (units_consumed <= 0) {
        printf("Invalid number of units entered.\n");
        return 1;
    }

    if (units_consumed >= 1 && units_consumed <= 30) {
        charge_per_unit = 20;
    }
    else if (units_consumed >= 31 && units_consumed <= 60) {
        charge_per_unit = 25;
    }
    else {
        charge_per_unit = 30;
    }

    Total_bill = units_consumed * charge_per_unit;

    printf("\nWater units consumed = %.2f units\n", units_consumed);
    printf("Charge per unit = %.2f KES\n", charge_per_unit);
    printf("Total water bill = %.2f KES\n", Total_bill);

    return 0;
}
