#include <stdio.h>

/*
  NAME: Eugene Wafula
  REG NO:PA106/G/28760/25
  DESCRIPTION:A C programme to calculate the volume and surface are  of a cylinder
*/

int main() {
    //variable declaration
    float radius, height, volume, surface_area;
    const float PI = 3.14159;

    //prompt the user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    //calculate volume and surface area
    volume = PI * radius * radius * height;
    surface_area = 2 * PI * radius * (radius + height);

    //display the results
    printf("Volume of the cylinder: %.2f\n", volume);
    printf("Surface area of the cylinder: %.2f\n", surface_area);

    return 0;
}