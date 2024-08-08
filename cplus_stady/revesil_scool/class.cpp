#include <iostream>

class DataClass
{
public:
	int m_day;
	int m_month;
	int m_year;

	void print()
	{
		std::cout << m_day << "/" << m_month << "/" <<  m_year << std::endl;
	}
};

int main()
{
	DataClass today { 8 , 8, 2024};
	today.print();
	return 0;
}