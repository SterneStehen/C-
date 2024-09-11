/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:39:43 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/11 15:07:10 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


class Weapon
{
private:
	std::string type;
public:
	Weapon(const std::string& initialType) : type(initialType) {}
	
	const std::string& getType() const
    {
        return type;
    }

	void setType(const std::string& newType)
	{
		this->type = newType;
	}
};

class HumanA: public Weapon
{
	private:
		std::string name;
	public:
		HumanA(std::string NewName)
		{
			this->name = NewName;
		}
	
		void attack()
		{
			std::cout << name << " attacks with their " << getType() << std::endl;
		}
};


int main()
{
	Weapon myWeapon("gun");
	std::cout << "Current weapon type: " << myWeapon.getType() << std::endl;
	myWeapon.setType("AKM");
	std::cout << "New weapon type: " << myWeapon.getType() << std::endl;
	return 0;
}
