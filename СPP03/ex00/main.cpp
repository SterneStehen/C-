/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:28:03 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/23 20:49:34 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Vova("Vova");
	ClapTrap Sergii("Sergii");

	Vova.attack("Sergii");
	Vova.takeDamage(3);
	Vova.annonce();

	Sergii.attack("Vova");
	Vova.beRepaired(2);
	Vova.attack("Sergii");
	Vova.attack("Sergii");
	Vova.takeDamage(9);

	return 0;
}