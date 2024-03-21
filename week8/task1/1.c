/*Write a C code defines a structure for employees that contains his salary, bonus and
deductions. The program shall ask the user to enter this information for three employees
(Mohsen, Maged and Mariam). Then the program will print the total values supplied by
the finance team.*/
#include <stdio.h>

struct Employee {
    float salary;
    float bonus;
    float deductions;
};

int main() {
    struct Employee employees[3];
    float totalSalary = 0.0, totalBonus = 0.0, totalDeductions = 0.0;

    for (int i = 0; i < 3; i++) {
        printf("Enter salary for employee %d: ", i+1);
        scanf("%f", &employees[i].salary);
        printf("Enter bonus for employee %d: ", i+1);
        scanf("%f", &employees[i].bonus);
        printf("Enter deductions for employee %d: ", i+1);
        scanf("%f", &employees[i].deductions);

        totalSalary += employees[i].salary;
        totalBonus += employees[i].bonus;
        totalDeductions += employees[i].deductions;
    }

    printf("\nTotal Salary: %.2f\n", totalSalary);
    printf("Total Bonus: %.2f\n", totalBonus);
    printf("Total Deductions: %.2f\n", totalDeductions);

    return 0;
}
