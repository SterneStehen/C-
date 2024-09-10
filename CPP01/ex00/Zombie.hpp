/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 23:31:01 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/02 23:31:01 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	void announce( void )
	{
		std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	}
	void setName(std::string NewName)
	{
		name = NewName;
		std::cout << "Set name: " << name << std::endl;
	}
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif