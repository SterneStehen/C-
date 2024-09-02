/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 23:18:50 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/02 23:18:50 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie* NewHeapZombi = newZombie("Heap");
    NewHeapZombi->announce();                   
    delete NewHeapZombi;                        

    randomChump("Stack");                    
    return 0;
}
