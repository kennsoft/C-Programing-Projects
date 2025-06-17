/*
 * Employee Payroll System
 * Author: kennsoft
 * GitHub: https://github.com/kennsoft
 * Description: This program calculates payroll details including overtime pay, tax deductions, and net salary.
 */

#include<stdio.h>

int main() {
    char Employee_name[50];
    float Basic_salary, grossSalary, netSalary, taxDeduction, overtimePay = 0;
    int Hoursworked, overtimeHours = 0;
    char choice;

    do {
        // Prompt for employee name
        printf("\nEnter Employee_name: ");
        scanf(" %s", Employee_name);  // Leading space to consume leftover newline

        // Prompt for basic salary
        printf("Enter Basic_salary: ");
        scanf("%f", &Basic_salary);

        // Prompt for hours worked in a week
        printf("Enter Hours worked in a week: ");
        scanf("%d", &Hoursworked);

        // Overtime calculation
        if (Hoursworked > 40) {
            overtimeHours = Hoursworked - 40;
            overtimePay = overtimeHours * 10.0;
        } else {
            overtimePay = 0;
        }

        // Gross salary calculation
        grossSalary = Basic_salary + overtimePay;

        // Tax calculation based on basic salary
        if (Basic_salary > 2000) {
            taxDeduction = grossSalary * 0.15;
        } else {
            taxDeduction = grossSalary * 0.05;
        }

        // Net salary calculation
        netSalary = grossSalary - taxDeduction;

        // Displaying the payroll report
        printf("\n.........Payroll Report...........\n");
        printf("Basic_salary : Kshs %.2f\n", Basic_salary);
        printf("Hoursworked  : %d\n", Hoursworked);
        printf("overtimePay  : Kshs %.2f\n", overtimePay);
        printf("grossSalary  : Kshs %.2f\n", grossSalary);
        printf("taxDeduction : Kshs %.2f\n", taxDeduction);
        printf("netSalary    : Kshs %.2f\n", netSalary);
        printf("......................................\n");

        // Ask if want to process another employee
        printf("\nDo you want to process another employee? (Y/N): ");
        scanf(" %c", &choice);  // Leading space to consume leftover newline

    } while (choice == 'Y' || choice == 'y');

    printf("\nExiting Payroll system. Thank you!\n");
    return 0;
}
