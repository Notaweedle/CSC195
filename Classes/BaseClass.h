#pragma once
#include <string>
#include <iostream>

class BaseClass {
public:
    enum class Employee_Type {
        FULL_TIME,
        PART_TIME
    };



public:
    std::string name;
    double salary;
    virtual ~BaseClass() = default;
    virtual void Read(std::ostream& out, std::istream& in) = 0;
    virtual void Write(std::ostream& out) = 0;
    virtual std::string GetName() { return name; }
    virtual Employee_Type GetType() = 0;
};