/*
  NAME:Eugene wafula
  REG NO:PA106/G/28760/25
*/

#include <stdio.h>

int main() {
    FILE * file;
    float sale, total = 0.0;

    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while(fscanf(file, "%f", &sale) == 1) {
        total += sale;
    }

    fclose(file);
    printf("Total sales for the day:%.2f\n, total");
    return 0;
}