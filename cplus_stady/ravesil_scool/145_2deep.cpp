#include <iostream>
#include <cstring>

class String
{
private:
	char *m_data;
public:
	String();
	String(const char *str);
	String(const String &str);
	String& operator=(const String &other);
	~String();

	const  char* getStr() const;
};
String::String(): m_data(nullptr){}

String::String(const char *str){
	m_data = new char[std::strlen(str) + 1];
	std::strcpy(m_data, str);
}

String::String(const String &str){
	if(str.m_data)
	{
		m_data = new char[std::strlen(str.m_data) + 1];
		std::strcpy(m_data, str.m_data);
	}
	else
		m_data = nullptr;
}

String& String::operator=(const String &other){
	if(this == &other)
		return *this;
	delete[] m_data;
	if(other.m_data){
		
		m_data = new char[std::strlen(other.m_data) + 1];
		std::strcpy(m_data, other.m_data);
	}
	else
		m_data = nullptr;
	return *this;

}

String::~String()
{
	delete[] m_data;
}


const char* String::getStr() const{
	return m_data;
}

int main()
{
	String A("Sergii");
	std::cout << A.getStr() << std::endl;

	String B = A;
	std::cout << B.getStr() << std::endl;

	String C;
	C = A;
	std::cout << C.getStr() << std::endl;
}
