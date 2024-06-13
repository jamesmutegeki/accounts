#include <stdio.h>

int main() {
    double N, square;


    printf("Enter a number (N): ");
    scanf("%d", &N);


    square = N * N;


    printf("You entered: %d\n", N);
    printf("Square of %d is \n", N, square);

    return 0;
}
