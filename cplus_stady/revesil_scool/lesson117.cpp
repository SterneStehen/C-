#include <iostream>
 
class FirstClasse
{
public:
    FirstClasse() { std::cout << "A\n"; }
};
 
class SecondClasse
{
private:
    FirstClasse m_a; // B содержит A, как переменную-член
 
public:
    SecondClasse() { std::cout << "B\n"; }
};
 
int main()
{
    SecondClasse b;
    return 0;
}