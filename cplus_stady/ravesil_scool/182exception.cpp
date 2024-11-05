#include <iostream>
#include <math.h>

int main ()
{
	double res;
	std::cout << "Enter digit" << std::endl;
	std::cin >> res;

	try
	{
		if(res < 0)
			throw -1;
		std::cout << "result is " << sqrt(res) << std::endl;
	}
	catch(int)
	{
		std::cout << "exeption" << '\n';
	}
	

}