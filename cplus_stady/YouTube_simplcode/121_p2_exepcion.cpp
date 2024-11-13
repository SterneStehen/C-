#include <iostream>
#include <fstream>
#include <string>
#include <exception>
#include <stdexcept>

class MyException
{
private:
	std::string m_err;
public:
	MyException(std::string err);
	~MyException();

	std::string getExcep() const;
};

MyException::MyException(std::string err):m_err(err)
{
}

MyException::~MyException()
{
}

std::string  MyException::getExcep() const{
	return m_err; 
}

void Foo( int value){
	if(value < 0)
	{
		throw std::exception();
		// throw "string error";
		// throw value;
		
	}
	if(value == 0)
	{
		throw "Hello exception";
		// throw "string error";
		// throw value;
		
	}
		if(value == 1)
	{
		throw 1;
		// throw "string error";
		// throw value;
		
	}
	if(value == 2)
	{
		throw MyException("\n I can create class Exeptioon !!! error My exeption");
		// throw "string error";
		// throw value;
		
	}
	std::cout << "value = " << value << std::endl;
}

int main()
{
	try
	{
		int a = 0;
		int b = 2;
		int c = -55;
		//Foo(a);
		Foo(b);
		//Foo(c);
	}
	catch(const std::exception & e){
		std::cout << e.what()<< std::endl;
		std::cout << "error exeption" << std::endl;
	}
	// catch(const int e){
	// 	std::cout << "error value " << e << std::endl;
	// 	//std::cout << "error integer" << std::endl;
	// }
	catch(const char *e){
		std::cout << "error value " << e << std::endl;
		//std::cout << "error integer" << std::endl;
	}
	catch(const MyException  &ex){
		std::cout << "message for class " << ex.getExcep() << std::endl;
	}
	catch(...){
		std::cout << "ALL CRASH Run function " << std::endl;
	}
	return 0;
}