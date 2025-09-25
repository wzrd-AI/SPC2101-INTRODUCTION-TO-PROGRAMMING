#include <stdio.h>

/*
  NAME:Eugene wafula
  REG NO:PA106/G/28760/25
  DESCRIPTION: A simple banking system
*/

int main() {
    int age;
    double income;

    //prompt the user for input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income: ");
    scanf("%lf", &income);

    //check eligibility
    if (age >= 21 && income >= 21000) {
        printf("Congratulations! You are eligible for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}    