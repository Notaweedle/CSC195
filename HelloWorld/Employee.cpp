#include "Employee.h"

const float Employee::TAX = 0.1f; // Define TAX (10%)

void Employee::Read() {
    std::cout << "Enter name: ";
    std::cin >> name;

    std::cout << "Enter age: ";
    std::cin >> age;

    std::cout << "Enter zipcode: ";
    std::cin >> zipcode;

    std::cout << "Enter hourly wage: ";
    std::cin >> wage;

    std::cout << "Enter total hours worked this week: ";
    std::cin >> hoursWorked;
}

void Employee::Write() {
    float weeklyGross = wage * hoursWorked;
    float weeklyTax = weeklyGross * TAX;
    float weeklyNet = weeklyGross - weeklyTax;
    float yearlyGross = weeklyGross * 52;
    float yearlyNet = yearlyGross - (yearlyGross * TAX);

    std::cout << "\nEmployee Payroll Summary\n";
    std::cout << "-------------------------\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Zipcode: " << zipcode << "\n";
    std::cout << "Hourly Wage: $" << wage << "\n";
    std::cout << "Hours Worked: " << hoursWorked << "\n";
    std::cout << "Weekly Gross Pay: $" << weeklyGross << "\n";
    std::cout << "Weekly Net Pay: $" << weeklyNet << "\n";
    std::cout << "Yearly Gross Pay: $" << yearlyGross << "\n";
    std::cout << "Yearly Net Pay: $" << yearlyNet << "\n";
}
int main() {
    int numEmployees;
    std::cout << "Number of employees (max 5): ";
    std::cin >> numEmployees;

    if (numEmployees > 5) numEmployees = 5; // Limit to 5 employees

    Employee employees[5]; // Array of Employee objects

    for (int i = 0; i < numEmployees; i++) {
        std::cout << "\nEnter details for Employee " << (i + 1) << ":\n";
        employees[i].Read();
    }

    std::cout << "\n--- Payroll Summary ---\n";
    for (int i = 0; i < numEmployees; i++) {
        employees[i].Write();
    }

    return 0;
}