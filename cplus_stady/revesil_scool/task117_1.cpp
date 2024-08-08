#include <iostream>

class Ball
{
private:
	std::string m_color;
	double m_radius;
public:
	Ball(double radius)
	{
		m_color = "red";
		m_radius = radius;
	}
	Ball(std::string color = "red", double radius = 30.0)
	{
		m_color = color;
		m_radius = radius;
	}
	// Ball(double radius, std::string color = "red")
	// {
	// 	m_radius = radius;
	// 	m_color = color;
	// }


	void print()
	{
		std::cout << "color: " << m_color<< ", " << "radius: " << m_radius << std::endl;
	}
};

int main()
{
    Ball def1;
    def1.print();
 
	Ball black("black");
	black.print();
	
	Ball thirty(30.0);
	thirty.print();
	
	Ball blackThirty("black", 30.0);
	blackThirty.print();
 
    return 0;
}