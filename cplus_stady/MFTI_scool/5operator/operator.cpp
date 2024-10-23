#include <iostream>

class String
{
private:
	char * str_;
	int size_;
public:
	String(const char * str, int size){
		str_ = new char[size];
		size_ = size;
	}
	~String(){};
	void annons()
	{
		std::cout << str_ << std::endl;
	}
};


int main()
{
	String s =  String("abc", 3);
	s.annons();
	String s1 = s;
}