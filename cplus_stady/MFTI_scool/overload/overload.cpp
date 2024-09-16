#include <iostream>


struct Complex
{
	double re = 0.0;
	double im = 0.0;
	Complex(double re) : re(re) {};
	Complex(double re, double im) : re(re), im(im) {};
	double sum (Complex n)
	{
		return n.im + n.re;
	}
	Complex& operator+=(const Complex &other ) {
		re += other.re;
		im += other.im;
		return *this;
	}
	
};

Complex operator+(const Complex &a, const Complex& b ) {
		return Complex(a.re + b.re, a.im + b.im);
	}


// Complex operator+=(const Complex &a, const double b ) {
// 		return Complex(a.re + b, a.im + b);
// 	}

int main()
{
	Complex com(2.2, 2.3);
	Complex com2(4.4, 5.5);
	// com.im = 2.2;
	// com.re = 2.2;
	std::cout << "result func = " << com.sum(com) << std::endl;
	Complex res = com += com2;
	std::cout << "result res.re = " << res.re << "\n res com.im = " << res.im << std::endl;

}