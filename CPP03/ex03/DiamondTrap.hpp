/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:04:13 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/30 12:58:06 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
    std::string name;

public:
    DiamondTrap(const std::string &newName);  // Accept const reference
    ~DiamondTrap();

    void attack(const std::string &target);
    void whoAmI();
    void takeDamage(unsigned int amount);      // Added this
    void beRepaired(unsigned int amount);      // Added this
};

#endif
