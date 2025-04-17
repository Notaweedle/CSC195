#include <iostream>
using namespace std;

class Human
{
public:
	Human()
	{
		cout << "Default Constructor\n";
	}
	Human(string name, unsigned short age) :
		m_name(name),
		m_age(age)
	{
		cout << "Constructor\n";
	}
	~Human() {
		cout << "Destructor\n";
	}

	string m_name;
	unsigned short m_age=0;

};

int main()
{
	{
		Human human("John", 25);
		cout << "Inside the block\n";
		cout << human.m_name << "\n";
		cout << human.m_age << "\n";
		cout << "End of the block\n";
	}
	
}

