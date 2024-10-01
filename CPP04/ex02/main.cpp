/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:26:48 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/01 14:37:43 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

	//Animal g;
    
    delete j;
    delete i;

    AAnimal* animals[4];
    for (int k = 0; k < 2; ++k) {
        animals[k] = new Dog();
    }
    for (int k = 2; k < 4; ++k) {
        animals[k] = new Cat();
    }

    for (int k = 0; k < 4; ++k) {
        delete animals[k];
    }

    return 0;
}
