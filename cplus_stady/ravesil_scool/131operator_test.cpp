#include <iostream>



class Fraction
{
private:
	int m_a;
	int m_b;
	// int m_res_a;
	// int m_res_b;
public:
	Fraction(int a, int b);
	~Fraction();
	int nod(int a, int b) {
    	return (b == 0) ? (a > 0 ? a : -a) : nod(b, a % b);
	}
	void print()
	{
		int res = nod(m_a, m_b);
		//std::cout << "res = " << res << std::endl;
		std::cout << m_a/res << "/" << m_b/res << std::endl;
	}
// 	friend Fraction operator*(const Fraction &f1, const Fraction &f2)
// {
// 	return Fraction(f1.m_numerator * f2.m_numerator, f1.m_denominator * f2.m_denominator);
// }
	friend Fraction operator*(const Fraction &d1, const Fraction &d2)
	{
		 
		// int m_res_a = d1.m_a * d2.m_a;
		// int m_res_b = d1.m_b * d2.m_b;
		// Fraction tmp(m_res_a, m_res_b);
		return Fraction(d1.m_a * d2.m_a, d1.m_b * d2.m_b);
	}
	friend Fraction operator*(const Fraction &d1, int value)
	{
		 
		// int m_res_a = d1.m_a * d2.m_a;
		// int m_res_b = d1.m_b * d2.m_b;
		// Fraction tmp(m_res_a, m_res_b);
		return Fraction(d1.m_a * value, d1.m_b);
	}
	friend Fraction operator*( int value, const Fraction &d1)
	{
		 
		return Fraction(d1.m_a * value, d1.m_b);
	}

	
	
};

Fraction::Fraction(int a, int b): m_a(a), m_b(b)
{
}

Fraction::~Fraction()
{
}



int main()
{
   	Fraction f1(3, 4);
    f1.print();
 
    Fraction f2(2, 7);
    f2.print();

	Fraction f3 = f1 * f2;
    f3.print();

	Fraction f4 = f1 * 3;
    f4.print();

	Fraction f5 = 3 * f2;
    f5.print();

	Fraction f6 = Fraction(1, 2) * Fraction(2, 3) * Fraction(3, 4);
    f6.print();
}