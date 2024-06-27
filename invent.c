#include <stdio.h>

#define MAX_ITEMS 5


struct Item {
    char name[50];
    double price;
    int quantity;
};

int main() {
    struct Item items[MAX_ITEMS];
    double totalPrice = 0;

    printf("Enter your favorite items and their prices:\n");


    for (int i = 0; i < MAX_ITEMS; ++i) {
        printf("Item; %d\n", i + 1);
        printf("Name; ");
        scanf("%s", &items[i].name);
        printf("Price; ");
        scanf("%lf", &items[i].price);
         printf("Quantity; ");
        scanf("%lf", &items[i].quantity);



        totalPrice += (double)(items[i].price * items[i].quantity);
    }


    printf("\nYour favorite items:\n");
    for (int i = 0; i < MAX_ITEMS; ++i) {
        printf("%s: %.2lf\n", items[i].name, items[i].price);
    }
    printf("Total price: %.2lf\n", totalPrice);


    return 0;
}
