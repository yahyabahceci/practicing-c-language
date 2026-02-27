#include <stdio.h>
#include <string.h>

char food[50] = "";
float price = 0;
int quantity = 0;
char dollar = '$';
float totalPrice = 0;

int main() {
    printf("What food do you want to buy?\n");
    fgets(food, sizeof food, stdin);
    food[strcspn(food, "\n")] = '\0';

    printf("Price? \n");
    scanf("%f", &price);

    printf("Quantity? \n");
    scanf("%d", &quantity);

    totalPrice = price * quantity;

    printf("You bought %d %s.\n",quantity,food);
    printf("Total price:%c%.2f\n",dollar,totalPrice);

    return 0;
}