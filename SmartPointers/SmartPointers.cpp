
#include <iostream>
#include <memory>

int g = 10;

template <typename T>
 struct smart_ptr
{
	 smart_ptr() = delete;
	 smart_ptr(T* p)
	 {
		 this->p = p;
	 }
	~smart_ptr()
	 {
		delete p;
		std::cout << "Destructor called, will to live gone.\n";
	 }
	T Derefrence() {return *p;}

	T& operator *() {return *p;}
	T* operator &() { return p; }
 
	 T* p = nullptr;
};

int main()
{
	g = 23;

	int i = 5;
	int* p = &i;


	{
		smart_ptr<int> sptr { new int (10)};
		*sptr = 20;

		std::cout << &sptr << std::endl;
		std::cout << *sptr << std::endl;
		std::cout << sptr.p << std::endl;

		smart_ptr<float> sptr1{ new float(3.14f) };

		
		
	}
	std::unique_ptr<int> uptr = std::make_unique<int>(69420);
	std::cout << uptr << std::endl;

	std::shared_ptr<int> sharedPtr = std::make_shared<int>(32);
	std::cout << sharedPtr.use_count() << std::endl;
	{
		std::shared_ptr<int> sharedPtr2 = sharedPtr;
		std::cout << sharedPtr.use_count() << std::endl;
	}
	
	std::shared_ptr<int> sharedPtr3 = sharedPtr;
	std::cout << sharedPtr.use_count() << std::endl;
}


