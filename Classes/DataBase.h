#pragma once
#include <vector>
#include <string>
#include "BaseClass.h"

class Database {
private:
    std::vector<BaseClass*> objects_;
public:
    ~Database();

    void Create(BaseClass::Employee_Type type);
    void DisplayAll();
    void Display(const std::string& name);
    void Display(BaseClass::Employee_Type type);
};
