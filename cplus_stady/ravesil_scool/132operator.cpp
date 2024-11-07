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
	
};

Dollar operator+(Dollar &d1, Dollar &d2)
	{
		return Dollar(d1.getdol + d2.getdol);
	}

	Dollar operator-(Dollar &d1, Dollar &d2)
	{
		return Dollar(d1.getdol - d2.getdol);
	}

	Dollar operator+(const Dollar &d1, int vaule)
	{
		return Dollar(d1.getdol + vaule);
	}

int main()
{
	Dollar A(3);
	Dollar B(4);
	Dollar C = A + B;
	std::cout << C.getdol()<< std::endl;
	Dollar D = C - A;
	std::cout << D.getdol()<< std::endl;
	Dollar E(2);
	Dollar F = E + 7;
	std::cout << F.getdol()<< std::endl;
}
