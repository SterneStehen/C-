/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:33:57 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/11 13:39:56 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N;
	std::cout << "Enter number of zombies: ";
    std::cin >> N;
	std:: string name;
	std::cout << "Enter name:  ";
	std::cin >> name;
	
	Zombie *horde = zombieHorde(N, name);
	
	if (horde)
	{
		for (size_t i = 0; i < N; i++)
		{
			std::cout << "horde number " << i << "  announce ";
			horde[i].announce();
		}
		delete[] horde;
		std::cout << "aray is destoy " << std::endl;
	}
	return 0;
}