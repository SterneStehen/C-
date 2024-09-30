/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 22:40:12 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/30 13:26:21 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(const std::string &newName)  // Changed to const reference
    : ClapTrap(newName + "_clap_name"), FragTrap(newName), ScavTrap(newName), name(newName) {
    FragTrap::setPoins((int)FragTrap::getHit(), (int)ScavTrap::getEnergy(), (int)FragTrap::getDamage());
	// hitPoints = FragTrap::hitPoints;
    // energyPoints = ScavTrap::energyPoints;
    // attackDamage = FragTrap::attackDamage;

    std::cout << "DiamondTrap " << name << " created." << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " destroyed." << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount) {
    FragTrap::takeDamage(amount);  // Disambiguate call
}

void DiamondTrap::whoAmI() {
    std::cout << "I am " << name << " and my ClapTrap name is " << ClapTrap::getName() << "." << std::endl;
}



void DiamondTrap::beRepaired(unsigned int amount) {
    FragTrap::beRepaired(amount);  // Disambiguate call
}
