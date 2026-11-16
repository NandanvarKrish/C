# include <stdio.h>

int main() {

    char item[50] = "";
    float price = 0.0;
    int qty = 0;
    char currency = '$';
    float total = 0.0;

    printf("What item you like to buy?: ");
    fgets(item, sizeof(item), stdin);

    printf("What id the price for each?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &qty);

    total = price * qty;

    printf("You've bought %d %s", qty, item);
    printf("Total: %c %.2f\n",currency, total);

    return 0;
}