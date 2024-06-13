#include <stdio.h>

int main() {
    double price, vatRate, vat, totalPrice;


    printf("Enter the price of the article: ");
    scanf("%lf", &price);


    printf("Enter the VAT rate (in percentage): ");
    scanf("%lf", &vatRate);


    vat = (price * vatRate) / 100;


    totalPrice = price + vat;


    printf("VAT amount: $%.2lf\n", vat);
    printf("Total price (including VAT): $%.2lf\n", totalPrice);

    return 0;
}
