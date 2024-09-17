#include <iostream>

class Person
{
  private:
	int x;

  public:
	Person(int a) : x(a){};
	~Person();

	friend void plusPrint(Person A, int y);
};

void	plusPrint(Person A, int y)
{
	std::cout << A.x + y + 1 << std::endl;
}

Person::~Person()
{
}

int	main(void)
{
	Person A(5);
	plusPrint(A, 4);
}