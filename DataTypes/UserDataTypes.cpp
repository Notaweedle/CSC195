#include <iostream>
#include "..//Employee/Employee.h" 
using namespace std;


class DataTypes {
public:
    void  userDataTypes() {
        int numEmployees;
        std::cout << "Number of employees (max 5): ";
        std::cin >> numEmployees;

        if (numEmployees > 5) numEmployees = 5;

        Employee employees[5];

        for (int i = 0; i < numEmployees; i++) {
            std::cout << "\nEnter details for Employee " << (i + 1) << ":\n";
            employees[i].Read();
        }

        std::cout << "\n--- Payroll Summary ---\n";
        for (int i = 0; i < numEmployees; i++) {
            employees[i].Write();
        }
    }
};