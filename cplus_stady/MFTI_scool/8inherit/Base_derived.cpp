#include <iostream>

class Base
{
private:
	
public:
	int x;
	Base(int x): x(x){};
	~Base(){};

	void func()
	{
		std::cout << "call f Base" << std::endl;
	}
};

class Derived: public Base
{
private:
	
public:
	int y;
	Derived(int y): Base(y), y(y){};
	~Derived(){};
	void func()
	{
		std::cout << "call f Derived" << std::endl;
	}
};


int main()
{
	Base B(4);
	Derived D(5);
	std::cout << "Base x = " << B.x << std::endl;
	std::cout << "Derivad y  = " << D.y << std::endl;
	
	// B = D;
	// std::cout << "Base x = " << B.x << std::endl;

	// Base * B2 = &D;
	// std::cout << "Base *B2 = " << B2.x << std::endl;
	// B2.func();

	Base & B1 = D;
	std::cout << "Base &B1.x = " << B1.x << std::endl;
	B1.func();
	static_cast<Derived&>(B1).func();
	std::cout << "Base &B1.y = " << static_cast<Derived&>(B1).x << std::endl;
}