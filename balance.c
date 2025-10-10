/*
  NAME:Eugene wafula
  REG NO:PA106/G/28760/25
  DESCRIPTION: A C program to check bank account balance
*/

#include <stdio.h>

int main() {
    float balance;
    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        float withdrawal;
        printf("Enter withdrawal amount: ");
        scanf("%f", &withdrawal);

        balance -= withdrawal;
        printf("Remaining balance: %.2f\n", balance);
    }
    
    return 0;
}
