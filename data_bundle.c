/*
  NAME:Eugene wafula
  REG NO:PA106/G/28760/25
  DESCRIPTION:A C progam to show mobile data bundles purchase
*/

#include <stdio.h>
int main() {
    int choice, bundle;
    float cost;

    //display data bundle options
    printf("Select a data bundle to purchase:\n");
    printf("1. 100MB - $50\n");
    printf("2. 500MB - $200\n");
    printf("3. 1GB   - $350\n");
    printf("4. 2GB   - $600\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    //determine the cost based on user choice
    switch (choice) {
        case 1:
            cost = 50;
            break;
        case 2:
            cost = 200;
            break;
        case 3:
            cost = 350;
            break;
        case 4:
            cost = 600;
            break;
        default:
            printf("Invalid choice. Please select a valid option.\n");
            return 1; //exit the program with an error code
    }

    //display the selected data bundle
    printf("You have selected option %d. The data bundle is %dMB, the cost is $%.2f\n", choice, bundle, cost);

    return 0;

}