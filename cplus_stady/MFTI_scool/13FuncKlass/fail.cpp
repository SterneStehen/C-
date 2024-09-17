#include <iostream>

class Person
{
	private:
	void f(int)
	{
		std::cout << 1 << std::endl;
	}
	public:

	void f(float)
	{
		std::cout << 2 << std::endl;
	}
};

int main()
{
	Person run;
	run.f(4f);

}