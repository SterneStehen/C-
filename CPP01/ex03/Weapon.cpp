/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:39:43 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/12 16:16:06 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


class Weapon
{
private:
	std::string type;
public:
	Weapon(const std::string& initialType);
    void setType(const std::string& newType);
	const std::string& getType() const;
    
};

	Weapon::Weapon(const std::string& initialType) : type(initialType) {}
	
	const std::string& Weapon::getType() const
    {
        return type;
    }

	void Weapon::setType(const std::string& newType)
	{
		this->type = newType;
	}

class HumanA
{
	private:
		std::string humanName;
    	Weapon& equippedWeapon; 
	public:
		HumanA(const std::string& name, Weapon& weapon);
    	void attack() const;
};

	HumanA::HumanA(const std::string& name, Weapon& weapon) : humanName(name), equippedWeapon(weapon) {}

	void HumanA::attack() const{
		std::cout << humanName << " attacks with their " << equippedWeapon.getType() << std::endl;
	}


int main()
{
	Weapon myWeapon("gun");
	std::cout << "Current weapon type: " << myWeapon.getType() << std::endl;
	myWeapon.setType("AKM");
	std::cout << "New weapon type: " << myWeapon.getType() << std::endl;
	HumanA serg("serg");
	
	return 0;
}
