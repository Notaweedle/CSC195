#include <iostream>
#include "Fraction.h"

using Fraction = mathlib::Fraction<int>;

int main() {
    Fraction fraction1{ 18, 5 };
    std::cout << "fraction1: " << fraction1 << std::endl;

    Fraction fraction2{ 15, 6 };
    std::cout << "fraction2: " << fraction2 << std::endl;
    std::cout << "simplify: " << fraction2.Simplify() << std::endl;

    std::cout << fraction1 << " == " << fraction2 << " result: " << (fraction1 == fraction2) << std::endl;
    std::cout << fraction1 << " > " << fraction2 << " result: " << (fraction1 > fraction2) << std::endl;

    std::cout << fraction1 << " + " << fraction2 << " result: " << (fraction1 + fraction2) << std::endl;
    std::cout << fraction1 << " * " << fraction2 << " result: " << (fraction1 * fraction2) << std::endl;

    Fraction fraction3;
    std::cout << "input fraction (numerator / denominator) e.g: 10/19: ";
    std::cin >> fraction3;
    std::cout << "You entered: " << fraction3 << std::endl;
    std::cout << "As float: " << fraction3.ToFloat() << std::endl;
}
