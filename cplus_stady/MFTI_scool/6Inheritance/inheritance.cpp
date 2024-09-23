
#include <iostream>

class Base
{
private:
	int num;
public:
	Base(int num): num(num) {};
	~Base();

	int printNum()
	{
		std::cout << "print base " << num << std::endl;
		return 0;
	}
};

Base::~Base()
{
}


class Derived: public Base
{
private:
	/* data */
public:
	Derived (int Dnum): Base(Dnum) {};
	~Derived ();
	int printNum(int num)
	{
		std::cout << "print Delived " << num << std::endl;
		return 0;
	}
};

Derived::~Derived()
{
}


int main()
{
	Base B(5);
	B.printNum();
	Derived D(4);
	D.Base::printNum();
	D.printNum(6);
}