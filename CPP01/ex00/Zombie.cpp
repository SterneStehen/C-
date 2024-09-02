/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 22:06:20 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/02 22:06:20 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
		name = name;
	} ;
Zombie::~Zombie() {
		std::cout << name << " was Desroy"<< std::endl;
	}; 
