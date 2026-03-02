#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char buffer[50];
double yahya = 0;
double pi = 3.14159;
double area = 0;
double surface_area = 0;
double volume = 0;

int main() {
    printf("Enter the radius: ");
    fgets(buffer,sizeof(buffer),stdin);
    yahya = strtod(buffer, NULL);


    if (yahya<=0) {
        printf("This is an invalid radius. Please enter a valid value of radius!");
        return 0;
    }else {
        area = pi * pow(yahya,2);
        printf("Area is: %.2lf\n", area);

        surface_area = 4 * pi * pow(yahya,2);
        printf("Surface area is: %.2lf\n", surface_area);

        volume = 4 * pi * pow(yahya,3) / 3;
        printf("Volume is: %.2lf\n", volume);
    }


    return 0;
}