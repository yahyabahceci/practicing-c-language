#include <stdio.h>
#include <math.h>

double principal = 0;
double interest_rate = 0;
int years = 0;
int times_compounded_per_year = 0;
double total = 0;

int main() {
    printf("Enter the principal rate:");
    scanf("%lf", &principal);

    printf("Enter the interest rate:");
    scanf("%lf",&interest_rate);
    interest_rate = interest_rate / 100;

    printf("Enter the # of years:");
    scanf("%d",&years);

    printf("Enter # the times compounded per year:");
    scanf("%d",&times_compounded_per_year);

    total = principal * pow((1 + interest_rate / times_compounded_per_year),times_compounded_per_year * years);

    printf("After %d years, the total will be $%.2lf",years,total);


    return 0;
}