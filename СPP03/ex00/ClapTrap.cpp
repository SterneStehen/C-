/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:01:18 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/23 14:36:59 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:01:18 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/23 14:22:31 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
private:
	std::string Name;
	int HitPoint;
	int EnergyPoints;
	int AttackDamage;

public:
	ClapTrap(std::string newName);
	~ClapTrap();

	std::string getName(void) const;
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void annonce(void);
};

ClapTrap::ClapTrap(std::string newName) : Name(newName), HitPoint(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "Constructor " << newName << " is called!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor " << Name << " is called!" << std::endl;
}

std::string ClapTrap::getName(void) const
{
	return Name;
}

void ClapTrap::annonce(void)
{
	std::cout << Name << " hit points = " << HitPoint << ", Energy points = " << EnergyPoints << ", Attack damage = " << AttackDamage << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (HitPoint <= 0)
	{
		std::cout << "ClapTrap " << Name << " cannot attack because it has no hit points!" << std::endl;
		return;
	}
	if (EnergyPoints <= 0)
	{
		std::cout << "ClapTrap " << Name << " cannot attack because it has no energy points!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	HitPoint -= amount;
	AttackDamage += amount;
	if (HitPoint < 0)
		HitPoint = 0;
	std::cout << Name << " takes " << amount << " points of damage!" << std::endl;
	if (HitPoint <= 0)
	{
		std::cout << Name << " has been KILL!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (HitPoint <= 0)
	{
		std::cout << "ClapTrap " << Name << " cannot be repaired because it has no hit points!" << std::endl;
		return;
	}
	if (EnergyPoints <= 0)
	{
		std::cout << "ClapTrap " << Name << " cannot be repaired because it has no energy points!" << std::endl;
		return;
	}
	HitPoint += amount;
	AttackDamage -= amount;
	EnergyPoints--;
	std::cout << Name << " is repaired by " << amount << " hit points!" << std::endl;
}

int main()
{
	ClapTrap Vova("Vova");
	ClapTrap Sergii("Sergii");

	Vova.takeDamage(3);
	Vova.annonce();

	Sergii.attack("Vova");
	Vova.beRepaired(2);
	Vova.attack("Sergii");
	Vova.attack("Sergii");
	Vova.takeDamage(9);

	return 0;
}
