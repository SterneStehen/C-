#include <iostream>

class Paralellogram
{
public:
	int x = 5;
public:
	Paralellogram(/* args */);
	~Paralellogram();
};

Paralellogram::Paralellogram(/* args */)
{
}

Paralellogram::~Paralellogram()
{
}

class Rectangle: public Paralellogram
{
public:
	int y;
public:
	Rectangle(/* args */);
	~Rectangle();
};

Rectangle::Rectangle(/* args */)
{
}

Rectangle::~Rectangle()
{
}


class Romb: public Paralellogram
{
public:
	int z;

	Romb(/* args */);
	~Romb();
};

Romb::Romb(/* args */)
{
}

Romb::~Romb()
{
}


class Square: public Romb, public Rectangle
{
private:
	int t;
public:
	Square(/* args */);
	~Square();
};

Square::Square(/* args */)
{
}

Square::~Square()
{
}


int main()
{
	Square S;
	//std::cout << S.x << std::endl
	std::cout << S.Rectangle::x << std::endl;
}