#include <iostream>


class CL
{
private:
	int x{5};
	char str[10] = "sergii";
	std::string str2 = "sergii2";
public:
	CL(/* args */);
	~CL();
	int z = 8;
	void annons(int y);
	int setCl();
};
void CL::annons(int y)
	{
		std::cout << x + y << std::endl;
	}

int CL::setCl()
{
	return x;
}

CL::CL(/* args */)
{
}

CL::~CL()
{
}

int main ()
{
	CL run;
	run.annons(8);
	std::cout << "x = " << run.setCl() << std::endl;
	std::cout << "int& = " << (int&)run << std::endl;
	std::cout << "char& = " << (std::string&)run << std::endl;
	char* strPtr = (char*)(&run + 1);
	std::cout << strPtr << std::endl;

}
