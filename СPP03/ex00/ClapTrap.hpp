/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:45 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/23 11:59:25 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class ClapTrap
{
private:
	std::string Name = "Sergii";
	int HitPoint = 10;
	int EnergyPoints = 10;
	int AttackDamage = 0;
	
public:
	ClapTrap(/* args */);
	~ClapTrap();

	std::string   getName (void) const
	{
		return Name;
	}



	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void annonce(void);

};

ClapTrap::ClapTrap(/* args */)
{
}

ClapTrap::~ClapTrap()
{
}

void ClapTrap::annonce(void)
{
	std::cout << "Hit poins = " << HitPoint << "Energy point = " << EnergyPoints << "damage = " << AttackDamage << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << getName() <<  "attacks " << target <<  "causing " << "points of damage!" << std::endl;
	
}
void ClapTrap::takeDamage(unsigned int amount)
{
	HitPoint -= 1;
	EnergyPoints -= 1;
	AttackDamage += 1;
	std::cout << " takeDamage" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	HitPoint += 1;
	EnergyPoints -= 1;
	AttackDamage += 1;
	std::cout << " takeDamage" << std::endl;
}

int main()
{
	ClapTrap Vova;
	Vova.takeDamage(3);
	Vova.annonce();
}