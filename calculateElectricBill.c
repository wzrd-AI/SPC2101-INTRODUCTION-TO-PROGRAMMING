/*
   NAME:Eugene Wafula
    REG NO:PA106/G/28760/25
    DESCRIPTION:A C program for calculating electric bill
*/

#include <stdio.h>

float calculateElectricBill(int units) {
    float bill;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } else if (units > 200) {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }
    return bill;
}

int main() {
    int units;
    float totalBill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    totalBill = calculateElectricBill(units);
    printf("Total Electric Bill: %.2f\n", totalBill);

    return 0;
}