#include <stdio.h>

int main() {
    double initial_speedometer, final_speedometer, fuel_used, distance_traveled, fuel_consumption;


    printf("Enter initial speedometer reading (in km): \n");
    scanf("%lf", &initial_speedometer);

    printf("Enter final speedometer reading (in km): \n");
    scanf("%lf", &final_speedometer);


    printf("Enter fuel used (in liters): ");
    scanf("%lf", &fuel_used);


    distance_traveled = final_speedometer - initial_speedometer;


    fuel_consumption = distance_traveled / fuel_used;


    printf("Fuel consumption: %.2lf km/L\n", fuel_consumption);

    return 0;
}

