/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:22:54 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 15:00:13 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
delete meta;
delete j;
delete i;
return 0;
}

// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"


// int main()
// {
// 	const WrongAnimal* A = new WrongAnimal();
// 	const WrongAnimal* WC = new WrongCat();
// 	A->makeSound();
// 	WC->makeSound();
	
// 	delete WC;
// 	delete A;
// 	return 0;
// }
