# ATM Simulator

This is a simple ATM Simulator program written in C. It provides a console-based interface that allows users to:

- Check their current account balance
- Deposit money into their account
- Withdraw money from their account
- Exit the program

## Features

- Menu-driven interface for easy navigation
- Input validation to ensure valid transactions
- Initial account balance set to $1000.00
- Clear prompts and messages for user interaction

## How to Compile and Run

1. Compile the program using a C compiler, for example:

   ```bash
   gcc ATM_Simulator.c -o ATM_Simulator
   ```

2. Run the compiled executable:

   ```bash
   ./ATM_Simulator
   ```

## Usage

- Upon running, the program displays a menu with options.
- Enter the number corresponding to the desired action.
- Follow prompts to deposit or withdraw money.
- The program will display updated balances after transactions.
- Choose the exit option to terminate the program.

## Notes

- The program does not persist data; all balances reset when restarted.
- Only positive amounts are accepted for deposits and withdrawals.
- Withdrawals cannot exceed the current balance.

## Author

This program was created as a simple demonstration of basic C programming concepts including loops, conditionals, and user input handling.
