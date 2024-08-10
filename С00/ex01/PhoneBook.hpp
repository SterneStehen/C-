/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <smoreron@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:16:16 by smoreron          #+#    #+#             */
/*   Updated: 2024/08/10 20:50:10 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"


class PhoneBook {
private:
    Contact contacts[8];
    int index;

public:
    PhoneBook();
    void AddContact();
    void SearchContacts() const;
};

#endif
