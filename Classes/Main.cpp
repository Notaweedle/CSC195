
#include "Database.h"
#include <iostream>

int main() {
    Database db;
    bool running = true;

    while (running) {
        std::cout << "\n--- Employee Menu ---\n";
        std::cout << "1. Create Employee\n";
        std::cout << "2. Display All\n";
        std::cout << "3. Display by Name\n";
        std::cout << "4. Display by Type\n";
        std::cout << "5. Quit\n";
        std::cout << "Choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
        case 1: {
            std::cout << "Enter type (0 for FULL_TIME, 1 for PART_TIME): ";
            int t;
            std::cin >> t;
            db.Create(static_cast<BaseClass::Employee_Type>(t));
            break;
        }
        case 2:
            db.DisplayAll();
            break;
        case 3: {
            std::cout << "Enter name: ";
            std::string name;
            std::cin >> name;
            db.Display(name);
            break;
        }
        case 4: {
            std::cout << "Enter type (0 for FULL_TIME, 1 for PART_TIME): ";
            int t;
            std::cin >> t;
            db.Display(static_cast<BaseClass::Employee_Type>(t));
            break;
        }
        case 5:
            running = false;
            break;
        default:
            std::cout << "Invalid choice.\n";
            break;
        }
    }

    return 0;
}