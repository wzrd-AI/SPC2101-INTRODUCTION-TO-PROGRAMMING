/*
   NAME:Eugene Wafula
   REG:PA106/G/28760/25
   DESCRIPTION:A C program for password
*/

#include <stdio.h>

int main() {
    int password;
    const int correct = 1234;
    int attempts = 0;

    do {
        printf("Enter the password: ");
        scanf("%d", &password);
        attempts++;

        if (password != correct) {
            printf("incorrect password, try again!\n");
            }
            }while (password != correct);
    printf("Access Granted!\n");
    printf("Total attempts: %d\n", attempts);

    return 0;
}