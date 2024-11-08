#include <iostream>
#include <cassert>

class Drop
{
private:
	int m_numenator;
	int m_denomenator;
public:
	Drop(int numenator = 0, int denomenator = 1);
	Drop(const Drop &D);
	Drop& operator=(const Drop &D);
	~Drop();

	

	friend std::ostream& operator<<(std::ostream &out, const Drop &d1);
};

Drop::Drop(int numenator, int denomenator):m_numenator(numenator), m_denomenator(denomenator)
{
	assert(denomenator !=0);
}

Drop::Drop(const Drop &D){
	m_numenator = D.m_numenator;
	m_denomenator = D.m_denomenator;
	std::cout << "Copy constructor worked here!" << std::endl;
}

Drop& Drop::operator=(const Drop &D){
	if(this == &D)
		return *this;
	m_numenator = D.m_numenator;
	m_denomenator = D.m_denomenator;
	std::cout << "Assignment operator worked here!" << std::endl;
	return *this;
}

Drop::~Drop()
{
}

std::ostream& operator<<(std::ostream &out, const  Drop &d1){
	out<< d1.m_numenator << "/" << d1.m_denomenator << "\n";
	return out;
}

int main()
{
	Drop D(3,4);
	std::cout << D << std::endl;
	int a = 7;
	Drop A = Drop(8);
	std::cout << A << std::endl;
	Drop B = 9;
	std::cout << B << std::endl;
	std::cout << "========================================" << "/n" << std::endl;
	Drop C(B);
	std::cout << C << std::endl;
	std::cout << "========================================" << "/n" << std::endl;
	Drop As;
	As = C;
	std::cout << As << std::endl;
	D = A = C;
	std::cout << D << A << C << std::endl;
}