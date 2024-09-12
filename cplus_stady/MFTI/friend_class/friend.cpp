#include <iostream>
#include <string>
class Person;


class Dog
{
private:
	int heals = 100;
public:
	friend Person;
};

class Person
{

public:
	void damge(Dog& dog)
	{
		dog.heals -= 20;
		std::cout << "Heals dog = " << dog.heals << std::endl;
	}
	void help(Dog& dog)
	{
		dog.heals += 20;
		std::cout << "Heals dog = " << dog.heals << std::endl;
	}void kill(Dog& dog)
	{
		dog.heals = 0;
		std::cout << "Heals dog  " << dog.heals << " You KILL IT" << std::endl;
	}
};

int main()
{
	Dog skubidu;
	Person Alex;
	Alex.damge(skubidu);
	Alex.damge(skubidu);
	Alex.damge(skubidu);
	Alex.help(skubidu);
	Alex.help(skubidu);
	Alex.help(skubidu);
	Alex.kill(skubidu);
	return 0;
}


