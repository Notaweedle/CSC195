// OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Human
{
public:
	Human()
	{
		std::cout << "Default Constructor\n";
	}
	Human(std::string name, unsigned short age) :
		m_name(name),
		m_age(age)
	{
		std::cout << "Constructor\n";
	}
	~Human() {
		std::cout << "Destructor\n";
	}

private:
	std::string m_name;
	unsigned short m_age=0;

};

int main()
{
	{
		Human human("John", 25);
	}
	
}

