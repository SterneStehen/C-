/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:18:30 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/30 13:02:25 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string Name;
	int hitPoint;
	int energyPoints;
	int attackDamage;
public:
	ClapTrap(std::string newName);
	~ClapTrap();

	std::string getName(void) const;
	int getHit(void) const;
	int getEnergy(void) const;
	int getDamage(void) const;
	
	void setName(std::string newName);
	void setPoins(int newHit, int newEnergy, int newDamage);
	
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void annonce(void);
};

#endif