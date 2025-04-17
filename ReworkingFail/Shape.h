#pragma once
class Shape {
public:
    Shape() {}
    ~Shape() {}

    float virtual Area() = 0;
};
