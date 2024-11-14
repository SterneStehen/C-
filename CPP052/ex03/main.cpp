/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 00:34:33 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/14 04:31:00 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main() {
    try {
        Intern intern;
        Bureaucrat bob("Bob", 1);

        AForm* shrubbery = intern.makeForm("shrubbery creation", "garden");
        if (shrubbery) {
            shrubbery->beSigned(bob);
            bob.executeForm(*shrubbery);
            delete shrubbery;
        }

        AForm* robotomy = intern.makeForm("robotomy request", "Bender");
        if (robotomy) {
            robotomy->beSigned(bob);
            bob.executeForm(*robotomy);
            delete robotomy;
        }

        AForm* pardon = intern.makeForm("presidential pardon", "Alice");
        if (pardon) {
            pardon->beSigned(bob);
            bob.executeForm(*pardon);
            delete pardon;
        }

        intern.makeForm("unknown form", "test");
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
