#include <iostream>

class Person
{
private:
	std::string m_name;
	int m_age;
public:
	Person(std::string name, int age);
	Person(const Person &P);
	~Person();

	void display() const;
};

Person::Person(std::string name, int age): m_name(name), m_age(age){}

Person::Person(const Person &P): m_name(P.m_name), m_age(P.m_age){}

Person::~Person(){}


void Person::display() const{
	std::cout << "Name is " << m_name << " Age is " << m_age << std::endl;
}


int main()
{
	Person person1("Sergii", 36);
	person1.display();
	Person person2(person1);
	person1.display();
}