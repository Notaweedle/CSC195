#include "FullTime.h"

void FullTime::Read(std::ostream& ostream, std::istream& istream) {
    ostream << "Enter Name: ";
    istream >> name;

    ostream << "Enter Salary: ";
    istream >> salary;
}

void FullTime::Write(std::ostream& ostream) {
    ostream << "FullTime Employee - Name: " << name << ", Salary: " << salary << std::endl;
}

BaseClass::Employee_Type FullTime::GetType() {
    return Employee_Type::FULL_TIME;
}
