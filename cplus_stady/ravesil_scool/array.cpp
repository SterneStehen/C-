#include <iostream>
#include <algorithm> 


int main()
{
	int num;
	std::cout << "Haw many digit do yor wont?  ";
	
	std::cin >> num;
	std::string arr[num];

	for(int i = 0; i < num; i++)
	{
		std::cin >>arr[i];
	}
	std::sort(arr, arr+num);
		for(int i = 0; i < num; i++)
	{
		std::cout << arr[i] << std::endl;
	}
	
}