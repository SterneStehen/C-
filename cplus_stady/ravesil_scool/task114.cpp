#include <iostream>

class Numbers
{
private:
	double m_a;
	double m_b;
	double m_c;
public:
	void setValues(double sa, double sb, double sc)
	 {
		m_a = sa;
		m_b = sb;
		m_c = sc;
	 }
	void print()
	{
		std::cout << m_a << ", " << m_b << ", " << m_c<< std::endl;
	}
	bool isEqual(Numbers exemp2)
	{
		if (m_a == exemp2.m_a && m_b == exemp2.m_b && m_c == exemp2.m_c)
			return true;
		else
			return false;
	}
};

int main()
{
    Numbers point1;
    point1.setValues(3.0, 4.0, 5.0);
 
    Numbers point2;
    point2.setValues(3.0, 4.0, 5.0);
 
    if (point1.isEqual(point2))
        std::cout << "point1 and point2 are equal\n";
    else
        std::cout << "point1 and point2 are not equal\n";
 
    Numbers point3;
    point3.setValues(7.0, 8.0, 9.0);
 
    if (point1.isEqual(point3))
        std::cout << "point1 and point3 are equal\n";
    else
        std::cout << "point1 and point3 are not equal\n";
 
    return 0;
}