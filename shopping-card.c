#include <stdio.h>
#include <string.h>

int main() {

    char item[50] = "";
    float price = .0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("what would you like to buy: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("what is the price for each item: ");
    scanf("%f", &price);

    printf("how many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("you have bought %d %s/s\n", quantity, item);
    printf("%c%.2f\n", currency, total);
}