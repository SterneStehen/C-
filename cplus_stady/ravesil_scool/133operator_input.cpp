#include <iostream>

class Point
{
private:
	double m_a, m_b, m_c;
public:
	Point(double a, double b, double c);
	~Point();

	double getA();
	double getB();
	double getC();

	void print();
	friend std::ostream& operator<< (std::ostream &out, const Point &point);
};

Point::Point(double a, double b, double c): m_a(a), m_b(b), m_c(c){};
Point::~Point(){};

double Point::getA(){
	return m_a;
}
double Point::getB(){
	return m_b;
}
double Point::getC(){
	return m_c;
}

void Point::print(){
	std::cout << "a = " << getA() << "\n" << "b = " << getB()<< "\n" << "c = " << getC() << "\n";
}
std::ostream& operator<< (std::ostream &out, const Point &point){
	out << "point a = " << point.m_a << "\n" <<"point b = " <<  point.m_b << "\n" << "point c = " <<  point.m_c << "\n";
	return out;
}


int main()
{
	Point P(2.2, 4.1, 3.4);
	P.print();
	std::cout << P << "\n";
}