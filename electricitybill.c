#include <stdio.h>

int main() {
    char Name[50];
    int Electricity_units;
    float bill;
    char choice;

    do {
        printf("Enter your Name: ");
        scanf("%s", Name);

        printf("Enter Electricity units used: ");
        scanf("%d", &Electricity_units);

        // Calculate bill using tiered rates
        if (Electricity_units <= 100) {
            bill = Electricity_units * 0.12;
        } else if (Electricity_units <= 500) {
            bill = (100 * 0.12) + (Electricity_units - 100) * 0.15;
        } else {
            bill = (100 * 0.12) + (400 * 0.15) + (Electricity_units - 500) * 0.20;
        }

        // Show category based on units used
        if (Electricity_units <= 200) {
            printf("Category: Residential User\n");
        } else if (Electricity_units <= 500) {
            printf("Category: Commercial User\n");
        } else {
            printf("Category: Industrial User\n");
        }

        printf("Your total bill is: Kshs %.2f\n", bill);

        // Ask if user wants to calculate again
        printf("Do you want to calculate again? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
