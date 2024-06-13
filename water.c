#include <stdio.h>

int main() {
    double initial_usage, final_usage, costPerLiter, total_cost;


    printf("Enter initial water usage (in kL): ");
    scanf("%lf", &initial_usage);

    printf("Enter final water usage (in kL): ");
    scanf("%lf", &final_usage);


    double total_usage = (final_usage - initial_usage) * 1000;


    costPerLiter = 1.50;


    total_cost = total_usage * costPerLiter;


    printf("Total water usage: %.2lf liters\n", total_usage);
    printf("Total cost: Shs. %.2lf\n", total_cost);

    return 0;
}
