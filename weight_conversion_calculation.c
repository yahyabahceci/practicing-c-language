#include <stdio.h>

double weight = 0;
int choice = 0;
double result = 0;

int main() {
    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2):");
    scanf("%d",&choice);

    if (choice == 1 || choice == 2) {
        if (choice == 1) {
            printf("Please enter your weight in kilograms\n");
            scanf("%lf",&weight);
            if (weight <= 0) {
                printf("There is no object without mass.\n");
            }
            else {
                result = weight * 2.205;
                printf("Your weight in pounds is %.2lf\n",result);
            }
        }
        else if (choice == 2) {
            printf("Please enter your weight in pounds\n");
            scanf("%lf",&weight);
            if (weight <= 0) {
                printf("There is no object without mass.\n");
            }
            else {
                result = weight / 2.205;
                printf("Your weight in kilograms is %.2lf\n",result);
            }

        }
    }
    else {
        printf("Please enter the correct option!");
    }

    return 0;
}