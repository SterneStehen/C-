#include <iostream>

class Base
{
private:
	
public:
	int x;
	Base(int x): x(x){};
	~Base(){};
	void virtual func(){
		std::cout << "call f Base " << std::endl;
	};
};



class Derived: public Base
{
private:
	int y;
public:
	Derived(int y): Base(y), y(y){};
	~Derived(){};
	void func(){
		std::cout << "call f Derived " << std::endl;
	}
};

int main()
{
	Derived D(5);
	D.func();
	Base &B = D;
	B.func();
}