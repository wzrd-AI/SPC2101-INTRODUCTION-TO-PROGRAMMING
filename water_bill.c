/*
  NAME:Eugene wafula
  REG NO:PA106/G/28760/25
  DESCRIPTION:A C program for water bill calculation
*/

#include <stdio.h>
int main() {
    int units;
    float bill_amount;

    //prompt the user for input
    printf("Enter the number of water units consumed: ");
    scanf("%d", &units);

    //calculate the bill amount based on the number of units consumed
    if (units <= 30) {
        bill_amount = units * 20; // Rate for first 30 units
    } else if (units <= 60) {
        bill_amount = (30 * 20) + ((units - 30) * 25); // Rate for next 30 units
    } else {
        bill_amount = (30 * 20) + (30 * 25) + ((units - 60) * 30); // Rate for units above 60
    }

    //display the bill amount
    printf("Total water bill amount: $%.2f\n", bill_amount);

    return 0;

}