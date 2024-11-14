/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:43:19 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/13 00:34:22 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <string> 

class RobotomyRequestForm : public AForm {
private:
    std::string m_target;

public:
    RobotomyRequestForm(std::string target);
    virtual ~RobotomyRequestForm();

    void execute(const Bureaucrat &executor) const override;
};

#endif
 