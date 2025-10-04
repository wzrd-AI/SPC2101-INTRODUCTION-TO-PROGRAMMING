/*
  NAME:Eugene wafula
  REG NO:PA106/G/28760/25
  DESCRIPTION:A C progam to show mobile data bundles purchase
*/

#include <stdio.h>
int main() {
    int choice;

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
            printf("You have selected 100MB bundle. cost : $50:\n");
            break;
        case 2:
            printf("You have selected 500MB bundle. cost : $200:\n");
            break;
        case 3:
            printf("You have selected 1GB bundle. cost : $350:\n");
            break;
        case 4:
            printf("You have selected 2GB bundle. cost : $600:\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;


}
