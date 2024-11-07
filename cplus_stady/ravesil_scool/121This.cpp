#include <iostream>


class Another
{
private:
	int m_numer;
public:
	
	Another(int numer);
	~Another();

	void setNumer(int numer);
	int getNumer();


	void announce();
};

void Another::setNumer(int numer){
	m_numer = numer;
}


int Another::getNumer(){
	return m_numer;
}

void Another::announce(){
	std::cout << m_numer << std::endl;
}

Another::Another(int numer)
{
	setNumer(numer);
	//m_numer = numer;
}

Another::~Another()
{
}


int main()
{
	Another A(5);
	A.setNumer(7);
	//setNumer(&A, 7);
	A.announce();
}