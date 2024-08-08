#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int i = 1;
	if(argc == 1)
	{
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
	}
	else
	{
		for( i ; i < argc; i++)
		{
			for(int j = 0; j < argv[i][j]; j++)
				std::cout << (char)toupper(argv[i][j]);
		if(i+1 != argc)
			std::cout << ' ' << std::endl;
		}
	}
	return 0;
}