#include <math.h>

int main() {
    double sideA, sideB, hypotenuse;


    printf("Enter the length of side A: ");
    scanf("%lf", &sideA);

    printf("Enter the length of side B: ");
    scanf("%lf", &sideB);


    hypotenuse = sqrt(sideA * sideA + sideB * sideB);


    printf("The length of the hypotenuse (H) is: %.2lf\n", hypotenuse);

    return 0;


}
