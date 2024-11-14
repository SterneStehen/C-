/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:35:07 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/13 00:35:07 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
private:
    std::string m_target;

public:
    ShrubberyCreationForm(std::string target);
    virtual ~ShrubberyCreationForm();

    void execute(const Bureaucrat &executor) const override;
};

#endif