/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:26:24 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/13 00:33:22 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#include "Form.hpp"

Form::Form(std::string name, int gradeSing, int gradeExecute):m_name(name),  m_gradeSing(gradeSing), m_gradeExecute(gradeExecute) {
	m_indicat = false;
	if (gradeSing < 1 || gradeExecute < 1)
    	throw GradeTooHighException();
	if (gradeSing > 150 || gradeExecute > 150)
    	throw GradeTooLowException();

}
Form::~Form(){};

const std::string & Form::getName() const{
	return m_name;
}
const bool & Form::isSigned() const{
	return  m_indicat;
}

const int& Form::getSing() const{
	return m_gradeSing;
}
const int& Form::getExecute() const{
	return m_gradeExecute;
}


std::ostream & operator<<(std::ostream & out, Form const & form){
	out << "Name is " << form.getName() << " grade Sing is " << form.getSing() << " grade Execute is " << form.getExecute() << std::endl;
	return out;
}

void Form::beSigned(const Bureaucrat & B){
	if(B.getGrade() <= m_gradeSing )
		m_indicat = true;
	else
		throw Form::GradeTooLowException();
}
 