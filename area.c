#include <stdio.h>

int main() {
    double base, height, area;


    printf("Enter the base of the triangle: ");
    scanf("%lf", &base);

    printf("Enter the height of the triangle: ");
    scanf("%lf", &height);


    area = 0.5 * base * height;


    printf("Triangle with base %.2lf and height %.2lf:\n", base, height);
    printf("Area = %.2lf square units\n", area);

    return 0;
}
 
