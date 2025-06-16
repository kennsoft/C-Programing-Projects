/**
 * ATMSimulation.c
 * 
 * This program simulates a simple ATM machine interface.
 * It allows the user to check their account balance, deposit money,
 * withdraw money, and exit the program.
 * The program uses a menu-driven interface and performs input validation
 * to ensure valid transactions.
 */

#include <stdio.h>

int main() {
    int choice;              // User's menu choice
    double balance = 1000.0; // Initial account balance
    double amount;           // Amount to deposit or withdraw

    printf("Welcome to the ATM Simulator\n");

    // Loop to display the menu and process user choices until exit
    do {
        // Display menu options
        printf("\nSelect an option:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Process the user's menu choice
        switch (choice) {
            case 1:
                // Display the current account balance
                printf("Your current balance is: $%.2f\n", balance);
                break;
            case 2:
                // Prompt for deposit amount
                printf("Enter deposit amount: ");
                scanf("%lf", &amount);
                // Validate deposit amount and update balance
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful! New balance: $%.2f\n", balance);
                } else {
                    // Handle invalid deposit amount
                    printf("Invalid deposit amount.\n");
                }
                break;
            case 3:
                // Prompt for withdrawal amount
                printf("Enter withdrawal amount: ");
                scanf("%lf", &amount);
                // Validate withdrawal amount and check sufficient balance
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful! New balance: $%.2f\n", balance);
                } else {
                    // Handle invalid withdrawal amount or insufficient funds
                    printf("Invalid withdrawal amount or insufficient balance.\n");
                }
                break;
            case 4:
                // Exit message
                printf("Thank you for using our ATM. Goodbye!\n");
                break;
            default:
                // Handle invalid menu choice
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4); // Continue until user chooses to exit

    return 0;
}
