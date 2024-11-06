#include <iostream>

class Numbers
{
public:
	int a;
	int b;

	
	void set(int first, int second)
	{
		a = first;
		b = second;
	}
	void print()
	{
		std::cout << a << " " << b << std::endl;

	}
};


int main()
{
	Numbers n1;
	n1.set(3, 3); // инициализируем объект n1 значениями 3 и 3
	
	Numbers n2{ 4, 4 }; // инициализируем объект n2 значениями 4 и 4
 
	n1.print();
	n2.print();
 
	return 0;
}