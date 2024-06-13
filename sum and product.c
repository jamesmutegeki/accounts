#include <stdio.h>

int main() {
     numA, numB, sum, product;


    printf("Enter the first number (A): ");
    scanf("%lf", &numA);

    printf("Enter the second number (B): ");
    scanf("%lf", &numB);



    sum = numA + numB;
    product = numA * numB;


    printf("Sum of %.2lf and %.2lf is %.2lf\n", numA, numB, sum);
    printf("Product of %.2lf and %.2lf is %.2lf\n", numA, numB, product);

    return 0;
}
