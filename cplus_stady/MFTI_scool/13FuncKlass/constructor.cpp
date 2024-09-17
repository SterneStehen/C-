#include <iostream>

class Comlex
{
private:
	double re = 0.0;
	double im = 0.0;
public:
	Comlex(double re);
	Comlex(double re, double im) : re(re), im(im){};
	~Comlex();
	double getComRe()
	{
		return re;
	}
	double getComIm()
	{
		return im;
	}
};

Comlex::Comlex(double re): re(re) {};


Comlex::~Comlex()
{
}

int main()
{
	Comlex a(3.8, 6.6);
	Comlex b = 5;
	Comlex c{6, 1.1};
	std::cout << "re = " << a.getComRe() << " | " << b.getComRe() << " | " << c.getComRe() << " | " << std::endl;
	std::cout << "im = " << a.getComIm() << " | " << b.getComIm() << " | " << c.getComIm() << " | " << std::endl;
}
