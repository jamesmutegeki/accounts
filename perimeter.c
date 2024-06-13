#include <stdio.h>

int main() {
    double length, breadth, area, perimeter;


    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%lf", &breadth);


    area = length * breadth;
    perimeter = 2 * (length + breadth);


    printf("Rectangle with length %.2lf and breadth %.2lf:\n", length, breadth);
    printf("Area = %.2lf square units\n", area);
    printf("Perimeter = %.2lf units\n", perimeter);

    return 0;
}
 
