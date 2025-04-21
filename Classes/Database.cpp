#include "Database.h"
#include "FullTime.h"
#include "PartTime.h"
#include <iostream>

Database::~Database() {
    for (auto obj : objects_) {
        delete obj;
    }
    objects_.clear();
}

void Database::Create(BaseClass::Employee_Type type) {
    BaseClass* obj = nullptr;

    switch (type) {
    case BaseClass::Employee_Type::FULL_TIME:
        obj = new FullTime();
        break;
    case BaseClass::Employee_Type::PART_TIME:
        obj = new PartTime();
        break;
    default:
        std::cout << "Invalid employee type.\n";
        return;
    }

    obj->Read(std::cout, std::cin);
    objects_.push_back(obj);
}

void Database::DisplayAll() {
    for (BaseClass* obj : objects_) {
        obj->Write(std::cout);
    }
}

void Database::Display(const std::string& name) {
    for (BaseClass* obj : objects_) {
        if (obj->GetName() == name) {
            obj->Write(std::cout);
        }
    }
}

void Database::Display(BaseClass::Employee_Type type) {
    for (BaseClass* obj : objects_) {
        if (obj->GetType() == type) {
            obj->Write(std::cout);
        }
    }
}
