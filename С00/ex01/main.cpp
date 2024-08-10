#include <iostream>

int main()
{
	std::string	cmd;
	
	while (true)
	{
		std::cout << "Enter command: \n" << std::endl;
		std::cin >> cmd;
		if(cmd == "ADD")
		{

		}
		else if(cmd == "SEARCH")
		{

		}
		else if (cmd == "EXIT")
		{
			break;
		}
		else
			std::cout << "repid you command \n" << std::endl;
	}
	return 0;
}