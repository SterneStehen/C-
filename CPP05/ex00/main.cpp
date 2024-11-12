/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:54:02 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/11 14:45:35 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Bureaucrat.hpp"

int main()
{
	try{
		Bureaucrat A("Alfred" , 149);
		std::cout << "created Bureaucrat Alfred"<< std::endl;
		std::cout << A << std::endl;

		A.LowGrade();
		std::cout << "Low grade"<< std::endl;
		std::cout << A << std::endl;

		A.LowGrade();
		std::cout << "Low grade"<< std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Catch exception "<< e.what() << std::endl;
	}

	std::cout << "=========================================="<< std::endl;

	try{
		Bureaucrat B("Bionce" , 2);
		std::cout << "created Bureaucrat Bionce"<< std::endl;
		std::cout << B << std::endl;

		B.HiGrade();
		std::cout << "Hi grade"<< std::endl;
		std::cout << B << std::endl;

		B.HiGrade();
		std::cout << "HI grade"<< std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Catch exception "<< e.what() << std::endl;
	}
}