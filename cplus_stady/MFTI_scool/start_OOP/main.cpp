#include <iostream>


struct S
{
	int x;
	double y = 3.14;
};

int main()
{
	std::cout << sizeof(S) << std::endl;
	S s{3, 5.5};
	std::cout << "x = " << s.x << "  \ny = " << s.y << std::endl;
}