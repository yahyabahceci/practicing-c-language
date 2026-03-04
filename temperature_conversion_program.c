#include <stdio.h>
#include <ctype.h>

char choice;
double temperature;
double result;

int main() {
    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temperature in Celsius (C) or Fahrenheit (F):");
    scanf("%c",&choice);

    if (choice == 'c' || choice == 'C') {
        printf("Enter the temperature in Celsius:");

        if (scanf("%lf",&temperature) == 1) {
            result = temperature * 1.8 + 32;
            printf("The temperature in Fahrenheit is %.2lf",result);
        }
        else {
            printf("Please enter the temperature as number!");
        }

    }
    else if (choice == 'f' || choice == 'F') {
        printf("Please enter the temperature in Fahrenheit:");

        if (scanf("%lf",&temperature) == 1) {
            result = (temperature - 32) / 1.8;
            printf("The temperature in Celsius is %.2lf",result);
        }
        else {
            printf("Please enter the temperature as number!");
        }
    }
    else {
        printf("You entered an invalid character. Please control your choice!");
    }

    return 0;
}