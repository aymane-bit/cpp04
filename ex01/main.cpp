/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:49:28 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/14 19:40:31 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    // Create an array of Animal* (mixed Dog and Cat objects)
    Animal* animals[6];

    // Half Dog and half Cat objects in the array
    for (int i = 0; i < 3; i++) {
        animals[i] = new Dog();
    }
    for (int i = 3; i < 6; i++) {
        animals[i] = new Cat();
    }

    // Test the makeSound method
    std::cout << "Testing sounds:" << std::endl;
    for (int i = 0; i < 6; i++) {
        animals[i]->makeSound();
    }

    // Test deep copy by creating a new Dog and assigning a Dog to it
    Dog dogCopy = *dynamic_cast<Dog*>(animals[0]);
    std::cout << "Testing deep copy (Dog):" << std::endl;
    dogCopy.makeSound();

    // Clean up: Delete every Animal (this will also call the appropriate destructors)
    std::cout << "Cleaning up:" << std::endl;
    for (int i = 0; i < 6; i++) {
        delete animals[i];
    }

    return 0;
}
