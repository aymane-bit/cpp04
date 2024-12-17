/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:17:18 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/17 16:42:23 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called\n"; 
    type = "Cat";
    brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called\n";
    delete brain;
}

Cat::Cat(const Cat& original) : AAnimal(original)
{
    std::cout << "Cat copy constructor called\n";
    this->type = original.type;
    this->brain = new Brain(*original.brain);
}

Cat&     Cat::operator=(const Cat &original)
{
    std::cout << "Cat copy assignment operator called\n";
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

void Cat::makeSound() const
{
    std::cout << "!! MIYAAAAAAAAAW MIYAAAAAAAAAAAAAW !!\n";
}

std::string const &Cat::gettype() const
{
    return this->type; 
}


