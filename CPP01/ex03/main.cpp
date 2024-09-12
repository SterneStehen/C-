/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:23:01 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/12 17:09:35 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Weapon
{
private:
	std::string type;
public:
	 Weapon(const std::string& newType);
    ~Weapon();
    void setType(const std::string& newType);
    const std::string& getType() const;
	
};

Weapon::Weapon(const std::string& newType) : type (newType)
{}

Weapon::~Weapon()
{
}

void Weapon::setType(const std::string& newType)
{
	this->type = newType;
}
const std::string& Weapon::getType() const
{
	return  type;
}


class HumanA
{
private:
	std::string humanAName;
	Weapon& eqwipmentHumanA;
public:
	HumanA(const std::string &name, Weapon &Weapon);
	~HumanA();
	void attack () const;
};

HumanA::HumanA(const std::string &name, Weapon &Weapon): humanAName(name), eqwipmentHumanA(Weapon) 
{
}

HumanA::~HumanA()
{
}
void HumanA::attack () const
{
	std::cout << humanAName << " attacks with their " << eqwipmentHumanA.getType() << std::endl; 
}


class HumanB
{
private:
	std::string humanBName;
	Weapon* weapon;
public:
	HumanB(const std::string &name);
	~HumanB();
	void attack() const;
	void setWeapon(Weapon &weapon);
};

HumanB::HumanB(const std::string &name): humanBName(name), weapon(nullptr) 
{
}

HumanB::~HumanB()
{
}

void HumanB::attack() const {
    if (weapon) {  // Проверяем, есть ли оружие
        std::cout << humanBName << " attacks with their " << weapon->getType() << std::endl;
    } else {
        std::cout << humanBName << " has no weapon to attack with!" << std::endl;
    }
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}


// int main()
// {
// 	Weapon gun ("gun berreta");
// 	std::cout << "Type Weapon gun is " << gun.getType() << std::endl;
// 	gun.setWeapon("gun glock");
// 	std::cout << "Type Weapon gun is " << gun.getType() << std::endl;
// 	Weapon automat ("AKM");
// 	HumanA Jon("Jon", automat);
// 	Jon.attack();
// 	HumanB Nik("Nik");
// 	//Nik.setType("grnata");
// 	Nik.attack();

// }

int main() {
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.attack();
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}