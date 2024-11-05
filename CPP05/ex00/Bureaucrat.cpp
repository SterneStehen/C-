/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:39:13 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/05 19:39:13 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat"

Bureaucrat::Bureaucrat(std::string& name, int grade):m_name(name){
	if(grade < 1)
		throw Bureaucrat::GradeTooLowException;
	if(grade > 150)
		throw Bureaucrat::GradeTooHighException;
	m_grade = grade;
};

Bureaucrat::~Bureaucrat(){};

const std::string& Bureaucrat::getName() const
{
	return m_name;
}
int Bureaucrat::getGrade() const
{
	return m_grade;
}

void Bureaucrat::HiGrade()
{
	
	if(m_grade++ > 150)
		trow Bureaucrat::GradeTooHighException();
	++m_grade;
}
void LowGrade()
{
	if(m_grade < 1)
		trow Bureaucrat::GradeTooLowException();
	--m_grade;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}
const char * Bureaucrat::GradeTooLlowException::what() const throw()
{
	return "Grade is too low!";
}