#include <iostream>


class Dollar
{
private:
	int m_dollar;
public:
	Dollar(int dol): m_dollar(dol){};
	


	~Dollar(){};
	int getdol()
	{
		return m_dollar;
	}
	friend Dollar operator+(Dollar &d1, Dollar &d2)
	{
		return Dollar(d1.m_dollar + d2.m_dollar);
	}

	friend Dollar operator-(Dollar &d1, Dollar &d2)
	{
		return Dollar(d1.m_dollar - d2.m_dollar);
	}
};

int main()
{
	Dollar A(3);
	Dollar B(4);
	Dollar C = A + B;
	std::cout << C.getdol()<< std::endl;
	Dollar D = C - A;
	std::cout << D.getdol()<< std::endl;
}
