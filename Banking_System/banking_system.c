/* Bank program in C */

#include <stdio.h>
#include <string.h>

int main() {
    printf("Welcome to our Bank services\n");

    char password[20];
    const char correctpassword[] = "zkl123";
    int option;
    int ID;
    float amount_to_Deposit;
    float available_amount = 100000;
    float amount_to_withdraw;
    float balance = 100000; // Initialize balance with available_amount
    int agent_number;
    int access_granted = 0;

    do {
        // Password check loop until correct password entered
        do {
            printf("\nEnter password:\n ");
            scanf("%s", password);

            if (strcmp(password, correctpassword) != 0) {
                printf("Incorrect password. Try again.\n");
            } else {
                printf("Access granted!\n\n");
                access_granted = 1;
            }
        } while (!access_granted);

        // Options menu
        printf("Select option\n 1. Deposit\n 2. Withdraw cash\n 3. Check balance\n 4. Exit\n");
        if (scanf("%d", &option) != 1) {
            printf("Invalid input. Please enter a number between 1 and 4.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        if (option >= 1 && option <= 4) {
            switch (option) {
                case 1:
                    printf("--------------------------------------------------\n");
                    printf("Enter your ID Number:\n");
                    if (scanf("%d", &ID) != 1) {
                        printf("Invalid ID input.\n");
                        while (getchar() != '\n');
                        break;
                    }
                    printf("Enter amount to Deposit:\n");
                    if (scanf("%f", &amount_to_Deposit) != 1 || amount_to_Deposit <= 0) {
                        printf("Invalid deposit amount.\n");
                        while (getchar() != '\n');
                        break;
                    }
                    balance += amount_to_Deposit;
                    printf("KEJ485TRO Confirm you have successfully deposited\nKshs.%.2f \nYour new Bank balance is \nKshs.%.2f \nThank you for using our service.\n--------------------------------------------------\n\n", amount_to_Deposit, balance);
                    break;
                case 2:
                    printf("----------------------------------------------------\n");
                    printf("Enter agent number to withdraw:\n");
                    if (scanf("%d", &agent_number) != 1) {
                        printf("Invalid agent number input.\n");
                        while (getchar() != '\n');
                        break;
                    }
                    printf("Enter amount to withdraw:\n");
                    if (scanf("%f", &amount_to_withdraw) != 1 || amount_to_withdraw <= 0) {
                        printf("Invalid withdrawal amount.\n");
                        while (getchar() != '\n');
                        break;
                    }
                    if (amount_to_withdraw > balance) {
                        printf("Insufficient balance. Your current balance is Kshs.%.2f\n", balance);
                        break;
                    }
                    balance -= amount_to_withdraw;
                    printf("JIK501HWO Confirmed you have withdrawn Kshs.%.2f from \nagent %d \nYour new Bank balance is\nKshs.%.2f\nThank you for using our services.\n---------------------------------------------------\n\n", amount_to_withdraw, agent_number, balance);
                    break;
                case 3:
                    printf("Your balance is Kshs.%.2f\n", balance);
                    break;
                case 4:
                    printf("\nExiting...\nGood day\n");
                    break;
                default:
                    printf("Incorrect Entry! Try Again. Thank you for using our services.\n");
                    break;
            }
        } else {
            printf("Invalid option. Try again.\n");
        }
    } while (option != 4);

    return 0;
}
