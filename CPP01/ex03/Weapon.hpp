/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 22:31:30 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/17 22:32:11 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
#define WEAPON_HPP

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


#endif
