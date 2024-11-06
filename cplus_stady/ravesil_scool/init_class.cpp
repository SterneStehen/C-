#include <iostream>
#include <cstdint>

class  RGBA
{
private:
	std::uint8_t m_red;
	std::uint8_t m_green;
	std::uint8_t m_blue;
	std::uint8_t m_alpha;
public:

	RGBA(std::uint8_t red1 = 0, std::uint8_t green1 = 0, std::uint8_t blue1 = 0, std::uint8_t alpha1 = 255)
		: m_red(red1), m_green(green1), m_blue(blue1), m_alpha(alpha1)
	{

	}
	void print()
	{
		std::cout << " red: " << (int)m_red << "  green: " << (int)m_green << "  blue: " << (int)m_blue << "  alpha: " << (int)m_alpha << "\n";
	}
};

int main()
{
	RGBA color(0, 135, 135);
	color.print();
 
	return 0;
}
