#include <iostream>


struct Complex
{
	double re = 0.0;
	double im = 0.0;
	Complex() : re(0), im(0) {};
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

// bool operator<(const Complex &a, const Complex &b)
// {
// 	return (a < b) ? a : b;
// }

Complex operator+(const Complex &a, const Complex& b ) {
		Complex result = a;
		result += b;
		return result;
	}

// Complex operator+(const Complex &a, const Complex& b ) {
// 		return Complex(a.re + b.re, a.im + b.im);
// 	}


// Complex operator+=(const Complex &a, const double b ) {
// 		return Complex(a.re + b, a.im + b);
// 	}

int main()
{
	Complex a(2.2, 1.3);
	Complex b(4.4, 4.4);
	// com.im = 2.2;
	// com.re = 2.2;
	std::cout << "result func = " << a.sum(a) << std::endl;
	Complex res;
	res  = a + b;
	std::cout << "result res.re = " << res.re << "\n res com.im = " << res.im << std::endl;

	//Complex res;
	a += b;
	std::cout << "result res.re += " << a.re << "\n res com.im += " << a.im << std::endl;

}