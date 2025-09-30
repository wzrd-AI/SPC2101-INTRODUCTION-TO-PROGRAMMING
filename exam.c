/*
  NAME:Eugene wafula
  REG NO:PA106/G/28760/25
  DESCRIPTION:A C program to show exam eligibility
*/

#include <stdio.h>
int main() {
    //variable declaration
    float attendance_percentage, average_marks;

    //prompt the user for input
    printf("Enter your attendance percentage: ");
    scanf("%f", &attendance_percentage);

    printf("Enter your average marks: ");
    scanf("%f", &average_marks);

    //check eligibility
    if (attendance_percentage >= 75 && average_marks >= 40) {
        printf("You are eligible to sit for the exam.\n");
    } else {
        printf("You are not eligible to sit for the exam.\n");
    }

    return 0;
}