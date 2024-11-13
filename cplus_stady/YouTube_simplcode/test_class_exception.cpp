#include <iostream>
#include <exception>



class NextException
{
private:
	std::string m_errMessage;
public:
	NextException(std::string errMessage);
	~NextException();

	std::string what() const;
};

NextException::NextException(std::string errMessage): m_errMessage(errMessage)
{
}

NextException::~NextException()
{
}

std::string NextException::what() const{
	return m_errMessage;
}


class Amimal
{
private:
	std::string m_Dog;
	int m_amount;
public:
	Amimal(std::string m_Dog, int m_amount);
	~Amimal();

	std::string getDog() const;
	int getAmount() const;

	
};
std::ostream & operator<<(std::ostream &output, const Amimal & A);

Amimal::Amimal(std::string Dog, int amount): m_Dog(Dog), m_amount(amount)
{
	if(m_amount < 0)
		throw NextException("dog equal zero");
}

Amimal::~Amimal()
{
}

std::string Amimal::getDog() const{
	return m_Dog;
}
int Amimal::getAmount() const{
	return m_amount;
}

std::ostream & operator<<(std::ostream &output, const Amimal & A) {
	output << "Animal run. name Dog: " << A.getDog() << " \nAmount " << A.getAmount() << std::endl;
	return output;
}


int main()
{
	try{
		Amimal D("Bars", -1);
		std::cout << "Animal run. name Dog: " << D.getDog() << std::endl;
		std::cout << "Animal run. Amount: " << D.getAmount() << std::endl;
		std::cout << "=============== operator=============="<< std::endl;
		std::cout << D << std::endl;

	}
	catch(const NextException & ex){
		std::cout << "run class NextExeption. catch:: " << ex.what()  << std::endl;
	}
	catch(...){
		std::cout << "exception ... run" << std::endl;
	}
}