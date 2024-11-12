/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:13:52 by smoreron          #+#    #+#             */
/*   Updated: 2024/11/11 14:45:05 by smoreron         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Form.hpp"

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat bob("Bob", 50);
        Bureaucrat alice("Alice", 1);

        // Создаем форму с валидными параметрами
        Form formA("FormA", 25, 75);
        std::cout << formA << std::endl;

        // Пытаемся подписать форму с помощью бюрократа, у которого grade не достаточно высок
        bob.signForm(formA);

        // Пытаемся подписать форму с помощью бюрократа с подходящим grade
        alice.signForm(formA);

        // Выводим информацию о форме после подписания
        std::cout << formA << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n--- Testing Exceptions for Form ---\n";

    try {
        // Создаем форму с некорректно высоким значением grade для подписи
        Form invalidFormHigh("InvalidFormHigh", 0, 75);
    } catch (const std::exception &e) {
        std::cerr << "Exception caught for high grade: " << e.what() << std::endl;
    }

    try {
        // Создаем форму с некорректно низким значением grade для исполнения
        Form invalidFormLow("InvalidFormLow", 25, 151);
    } catch (const std::exception &e) {
        std::cerr << "Exception caught for low grade: " << e.what() << std::endl;
    }

    return 0;
}
