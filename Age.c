#include <stdio.h>

/*
  NAME: Eugene Wafula
  REG NO:PA106/G/28760/25
  DESCRIPPTION:A C programme to display,height,weight,age,ID number and bank balance
*/

int main() {
    //variable declaration
    float heiht, weight, bank_balance;
    int age, id_number;

    //prompt the user for input
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your age in years: ");
    scanf("%d", &age);

    printf("Enter your ID number: ");
    scanf("%d", &id_number);

    printf("Enter your bank balance: ");
    scanf("%f", &bank_balance);

    //display the collected information
    printf("\n--- User Information ---\n");
    printf("Height: %.2f meters\n", heiht);
    printf("Weight: %.2f kilograms\n", weight);
    printf("Age: %d years\n", age);
    printf("ID Number: %d\n", id_number);
    printf("Bank Balance: $%.2f\n", bank_balance);

    return 0;
}    