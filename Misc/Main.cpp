#include <iostream>
#include <vector>
#include "Point.h"
using names_t = std::vector<std::string>;
namespace math
{
	template<typename T1, typename T2 >

	T1 max(T1 a, T2 b)
	{
		return (a > b) ? a : b;
	}
}



void print(const names_t& names)
{
	
	for (std::string name : names)
	{
		std::cout << name << std::endl;
	}
}

int main()
{
	Point <int>  p1(23, 34);
	std::cout << p1.GetX() << " " << p1.GetY() << std::endl;
	Point<int> p2(43, 92);
	Point<int> p3;
	p3 = p1 - (p2);

	std::cout << p3 << std::endl;
	//std::cout << p1.Add(p2) << std::endl;
	/*std::cout << p3.GetX() << " " << p3.GetY() << std::endl;


	std::cout << math::max(6, 10) << std::endl;
	std::cout << std::max(6, 10) << std::endl;

	names_t names{ "Pixy","Grass","Firefox" };
	print(names);*/
}

