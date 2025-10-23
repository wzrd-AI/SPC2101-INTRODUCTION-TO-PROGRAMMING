/*
  NAME:Eugene wafula
  REG NO:PA106/G/28760/25
  DESCRIPTION:A C program for a number guessing game
*/

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    srand(time(0)); // Seed the random number generator
    number = rand() % 20 + 1; // Generate a random number between 1 and 20

    printf("Guess the number between 1 and 20:\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == number) {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", number, attempts);
            break;
        } else if (guess < number) {
            printf("Too low!\n");
        } else {
            printf("Too high!\n");
        }
    }

    return 0;
}