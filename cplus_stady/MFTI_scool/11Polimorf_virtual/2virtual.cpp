#include <iostream>

class Base
{
	public:
	// Base(){};
	// ~Base(){};
	virtual void f(int)
	{
		std::cout << "base\n";
 	}
	void f(double)
	{
		std::cout << "Non virtual Base\n";
	}
};

class Derived: public Base
{
	public:
	// Derived(){};
	int a = 0;
	void f(double){
	std::cout << a << std::endl;
	}
};

int main(){
	Derived d;
	
	Base& b = d;
	d.f(0);
	b.f(0.0);
	d.Base::f(0);
}