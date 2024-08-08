#include <iostream>

int main(int argc, char *argv[])
{
	using centimetr = long int;
	centimetr radius { atol(argv[1]) };
	const double Pi = 3.14;
	std::cout << 2 * Pi * radius << std::endl;
}