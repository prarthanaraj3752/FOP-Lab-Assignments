#include <stdio.h>

int main() {

    float basic_salary, HRA, TA, gross_salary, tax, net_salary;

    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);

    HRA = 0.10 * basic_salary;
    TA = 0.05 * basic_salary;
    gross_salary = basic_salary + HRA + TA;
    tax = 0.02 * gross_salary;
    net_salary = gross_salary - tax;

    printf("Gross Salary = %.2f\n", gross_salary);
    printf("Net Salary = %.2f", net_salary);

    return 0;
}
