#include <iostream>

class Grand
{
private:
	
public:
	int num;
	Grand(int numG): num(numG) {};
	~Grand();
	void annonceG()
	{
		std::cout << "Grand num "  << num << std::endl;
	}
	int getNum()
	{
		return num;
	}
};

Grand::~Grand()
{
}



class Mom: private Grand
{
private:
	/* data */
public:
	Mom(int numM): Grand(numM){};
	~Mom();
	void annonceM()
	{
		std::cout << "Mom num "  << Grand::num << std::endl;
	}
};

Mom::~Mom()
{
}

class Son: public Mom
{
private:
	/* data */
public:
	Son(int numS): Mom(numS){};
	~Son();
	

};

Son::~Son()
{
}

int main()
{
	Son Sergii(5);
	Sergii.Mom::annonceM();
	//Sergii.Grand::annonceG();
	//Sergii.Mom::num;
}
