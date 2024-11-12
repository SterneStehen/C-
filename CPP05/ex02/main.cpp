/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 00:34:33 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/13 00:34:36 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main() {
    Bureaucrat alice("Alice", 1);
    Bureaucrat bob("Bob", 50);

    ShrubberyCreationForm form1("Home");
    RobotomyRequestForm form2("Target");
    PresidentialPardonForm form3("Someone");

    form1.beSigned(alice);
    alice.executeForm(form1);

    form2.beSigned(alice);
    alice.executeForm(form2);

    form3.beSigned(alice);
    alice.executeForm(form3);

    return 0;
}
