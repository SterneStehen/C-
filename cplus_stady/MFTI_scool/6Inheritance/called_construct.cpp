#include <iostream>


class Grend
{
private:
	int numG;
public:
	Grend(int numG): numG(numG){};
	~Grend();
	void printG()
	{
		std::cout << "Grang = " << numG << std::endl;
	}
};



Grend::~Grend()
{
}

class Mom: public Grend
{
private:
	int numM;
public:
	Mom(int newnumM): Grend(newnumM){
		numM=newnumM;
	};
	~Mom();

	void printM()
	{
		std::cout << "Mom = " << numM << std::endl;
	}
};

Mom::~Mom()
{
}

class Son: public Mom
{
private:
	int numS;
public:
	Son(int numS, int numSM):  Mom(numSM), numS(numS){};
	~Son();

	void printS()
	{
		std::cout << "Son = " << numS << std::endl;
	}
};



Son::~Son()
{
}


int main()
{
	Son sergii(5, 6);
	sergii.printS();
	sergii.printM();
	sergii.printG();
}