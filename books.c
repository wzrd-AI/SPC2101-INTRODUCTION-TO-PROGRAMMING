/*
  NAME:Eugene wafula
  REG NO:PA106/G/28760/25
*/

#include <stdio.h>

int main() {
    FILE * file;
    char title[100];

    file = fopen("borrowed_book.txt","a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter book title:");
    fgets(title, sizeof(title), stdin);

    fprintf(file, "%s", title);
    fclose(file);

    printf("Book title saved successfully.\n");
    return 0;
}