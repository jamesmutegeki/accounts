#include <stdio.h>

int main() {
    long input_minutes;
    int days, hours, mins, seconds;


    printf("Enter a value in minutes: \n");
    scanf("%ld", &input_minutes);


    days = input_minutes / 1440;
    input_minutes %= 1440;
    hours = input_minutes / 60;
    mins = input_minutes % 60;
    seconds = (int)(input_minutes % 1 * 60);


    printf("%ld minutes = %d days, %d hours, %d minutes, %d seconds\n",
           input_minutes, days, hours, mins, seconds);

    return 0;
}

