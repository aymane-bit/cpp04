/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:49:28 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/17 17:17:52 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{
    // AAnimal test;    
    AAnimal* dog = new Dog();
    AAnimal* cat = new Cat();

    std::cout << "\nTesting the Dog:" << std::endl;
    dog->makeSound();

    std::cout << "\nTesting the Cat:" << std::endl;
    cat->makeSound();

    // Clean up
    delete dog;
    delete cat;

    return 0;
}
