#include <stdio.h>

int main() {
    float basic salary, allowance percentage, deduction percentage;
    float allowance amount, deduction amount, net salary;
    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);
    printf("Enter Allowance Percentage (e.g., 10 for 10%%): ");
    scanf("%f", &allowance percentage);
    printf("Enter Deduction Percentage (e.g., 5 for 5%%): ");
    scanf("%f", &deduction percentage);
    allowance_amount = basic_salary * (allowance percentage / 100);
    deduction_amount = basic_salary * (deduction percentage / 100);
    net_salary = basic_salary + allowance_amount - deduction_amount;

   
    printf("\n--- Salary Details ---\n");
    printf("Basic Salary: %.2f\n", basic_salary);
    printf("Allowance Amount: %.2f\n", allowance_amount);
    printf("Deduction Amount: %.2f\n", deduction_amount);
    printf("Net Salary: %.2f\n", net_salary);

    return 0;
}