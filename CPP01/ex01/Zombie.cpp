/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:51:28 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/11 13:36:18 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "Creat Zombie: " << std::endl;
}
Zombie::~Zombie()
{
	std::cout << "Destroyed Zombie: " << name << std::endl;
}
