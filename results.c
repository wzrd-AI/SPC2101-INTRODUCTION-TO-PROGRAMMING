/*
  NAME:Eugene wafula
  REG NO:PA106/G/28760/25
*/

#include <stdio.h>
struct student {
    char name[50];
    int regNo;
    float marks;
};

int main() {
    FILE *file;
    sruct student s;

    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Name\t\tmarks\n");
    printf("____________________________________\n");
    while(fread(&s, sizeof(sruct student), 1, file)) {
        printf("%s\t%.2f\n", s.name, s.marks);
    }

    fclose(file);
    return 0;
}
