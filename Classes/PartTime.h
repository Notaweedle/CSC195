
#pragma once
#include "BaseClass.h"
#include <iostream>

class PartTime : public BaseClass {
private:
    
    double salary;

public:
    void Read(std::ostream& ostream, std::istream& istream) override;
    void Write(std::ostream& ostream) override;
    Employee_Type GetType() override;
    std::string GetName() override { return name; } // optional, if used in search
};


