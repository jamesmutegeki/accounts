#include <stdio.h>

int main() {
    printf("WELCOME TO ST.JAMES BANK.\n");
    char option;
    double amt;

    double balance = 100000;
    char withdraw = 'W';
    char deposit = 'D';
    char check_balance = 'B';

    printf("\nwithdraw: 'W'\ncheck_balance: 'B'\ndeposit: 'D'\n");
    scanf(" %c", &option);
    if (option == 'B') {
        printf("Your account balance is: UGX %.2f\n", balance);
    } else if (option == 'W') {
        printf("Enter amount to be withdrawn (UGX): ");
        scanf("%lf", &amt);

        if (amt > balance) {
            printf("Insufficient balance\n");
        } else {
            balance -= amt;
            printf("Your new account balance is: UGX %.2f\n", balance);
        }
    } else if (option == 'D') {
        printf("Amount to be deposited: ");
        scanf("%lf", &amt);
        balance += amt;
        printf("Your new account balance is: UGX %.2f\n", balance);
    } else {
        printf("Invalid option\n");
    }

    printf("Thank you for using ST.JAMES-Bank.\n");

    return 0;
}
