/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:17:18 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/17 16:42:33 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called\n"; 
    type = "Dog";
    this->brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog destructor called\n";
    delete brain;
}

Dog::Dog(const Dog& original) : AAnimal(original)
{
    std::cout << "Dog copy constructor called\n";
    this->type = original.type;
    this->brain = new Brain(*original.brain);
}

Dog&     Dog::operator=(const Dog &original)
{
    std::cout << "Dog copy assignment operator called\n";
    if (this != &original)
    {
        this->type = original.type;
        AAnimal::operator=(original);
        if (this->brain) 
            delete this->brain;
        this->brain = new Brain(*original.brain);  
    }
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