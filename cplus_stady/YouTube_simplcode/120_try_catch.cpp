#include <iostream>
#include <exception>
#include <fstream>

int main()
{
	std::string patch = "test1.txt";


	std::ifstream fin;
	fin.exceptions(std::ifstream::badbit | std::ifstream::failbit);
try
{
	std::cout << "try open file" << std::endl;
	fin.open(patch);
	std::cout << "All ok. file open" << std::endl;
}
// catch(const std::exception& e)
// {	
// 	std::cerr << e.what() << '\n';
// 	std::cout << "Error open file" << std::endl;
// }
catch(const std::ifstream::failure & e)
{
	std::cout << e.what() << std::endl;
	std::cout << e.code() << std::endl;
}

return 0;
}