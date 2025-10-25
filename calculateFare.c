/*
   NAME:Eugene Wafula
    REG NO:PA106/G/28760/25
    DESCRIPTION:A C program for to calculate fare
*/

#include <stdio.h>
float calculateFare(float distance) {
    float rate = 50.0;
}

int main() {
    float distance, total;

    printf("Enter the distance traveled in kilometers: ");
    scanf("%f", &distance);

    total = calculateFare(distance);
    printf("Total Fare: %.2f\n", total);

    return 0;
}