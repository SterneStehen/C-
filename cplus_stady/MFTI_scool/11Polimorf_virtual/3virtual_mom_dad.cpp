#include <iostream>

struct Mom
{
	virtual void f(){
		std::cout << "Mom\n";
	}
};


struct Dad
{
	void f(){
		std::cout << "Dad\n";
	}
};

struct Son: public Mom, public Dad
{
	void f(){
		std::cout << "Son\n";
	}
};


int main()
{
	Son s;
	s.f();

	Mom& m = s;
	m.f();

	Dad& d = s;
	d.f();
	
}