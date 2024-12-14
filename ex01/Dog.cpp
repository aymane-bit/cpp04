/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:17:18 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/14 18:26:25 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called\n"; 
    type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog destructor called\n";
}

Dog::Dog(const Dog& original) : Animal(original)
{
    std::cout << "Dog copy constructor called\n";
    this->type = original.type;
}

Dog&     Dog::operator=(const Dog &original)
{
    std::cout << "Dog copy assignment operator called\n";
    if (this != &original)
        this->type = original.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "!! HAAAAAAAW HAAAAAAAW !!\n";
}


std::string const &Dog::gettype() const
{
    return this->type; 
}