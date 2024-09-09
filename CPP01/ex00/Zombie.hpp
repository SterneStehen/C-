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

class Zombie {
private:
    std::string name;
public:
    Zombie(std::string name);
    ~Zombie();
    void announce(){
		std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	}
};

// Прототипы функций
Zombie* newZombie(std::string NewName);
void randomChump(std::string name);

#endif // ZOMBIE_HPP