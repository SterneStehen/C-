/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:22:59 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/13 00:33:31 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FORM_HPP
#define FORM_HPP
 
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>


class Bureaucrat;

class Form
{
private:
	const std::string m_name;
	bool m_indicat;
	const int m_gradeSing;
	const int m_gradeExecute;
public:
	class GradeTooHighException : public std::exception {
    const char *what() const noexcept override {
        return "Grade too high for form.";
    }
	};

	class GradeTooLowException : public std::exception {
    const char *what() const noexcept override {
        return "Grade too low for form.";
    }
};

	Form(std::string name, int m_gradeSing, int m_gradeExecute);
	~Form();

	const std::string& getName() const;
	const bool & isSigned() const;
	const int& getSing() const;
	const int& getExecute() const;

	void beSigned(const Bureaucrat & B);
};
std::ostream & operator<<(std::ostream & out, Form const & form);

#endif