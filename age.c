#include <time.h>

int main() {
    int birthYear, currentYear, age;


    printf("Enter your year of birth: ");
    scanf("%d", &birthYear);


    time_t t = time(NULL);
    struct tm *localTime = localtime(&t);
    currentYear = localTime->tm_year + 1900;


    age = currentYear - birthYear;


    printf("Your age is: %d\n", age);

    return 0;
}
