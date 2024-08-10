/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:33:40 by smoreron          #+#    #+#             */
/*   Updated: 2024/08/10 20:48:32 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main()
{
	PhoneBook phoneBook;
    std::string command;
	std::string	cmd;
	
	while (true)
	{
		std::cout << "Enter command: \n" << std::endl;
		std::cin >> cmd;
		if(cmd == "ADD" || cmd == "add")
		{
			phoneBook.AddContact();
		}
		else if(cmd == "SEARCH" || cmd == "search")
		{
			phoneBook.SearchContacts();
		}
		else if (cmd == "EXIT")
		{
			break;
		}
		else
			std::cout << "repid you command \n" << std::endl;
	}
	return 0;
}