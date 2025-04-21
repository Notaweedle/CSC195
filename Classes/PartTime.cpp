#include "PartTime.h"

#include "FullTime.h"

void PartTime::Read(std::ostream& ostream, std::istream& istream) {
    ostream << "Enter Name: ";
    istream >> name;

    ostream << "Enter Salary: ";
    istream >> salary;
}

void PartTime::Write(std::ostream& ostream) {
    ostream << "PartTime Employee - Name: " << name << ", Salary: " << salary << std::endl;
}

BaseClass::Employee_Type PartTime::GetType() {
    return Employee_Type::PART_TIME;
}
