#include <stdio.h>

double num1, num2 = 0.0;
char operator = '\0';
double result = 0.0;

int main() {
    printf("Please enter the first number:");
    scanf("%lf",&num1);

    printf("Please enter operator (+,-,*,/):");
    scanf(" %c",&operator);

    printf("Please enter the second number:");
    scanf("%lf",&num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            if (result == 0.0) {
                printf("The result is %.2lf",result);
            }
            break;
        case '-':
            result = num1 - num2;
            if (result == 0.0) {
                printf("The result is %.2lf",result);
            }
            break;
        case '*':
            result = num1 * num2;
            if (result == 0.0) {
                printf("The result is %.2lf",result);
            }
            break;
        case '/':
            result = num1 / num2;
            if (num2 == 0.0) {
                printf("You can't divide by zero!");
            }
            else {
                if (result == 0.0) {
                    printf("The result is %.2lf",result);
                }
            }

            break;
        default:
            printf("Invalid input");
    }

    if (result != 0.0) {
        printf("The result is %.2lf",result);
    }

    return 0;
}