/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:17:18 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/14 18:26:25 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called\n"; 
    type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat destructor called\n";
}

Cat::Cat(const Cat& original) : Animal(original)
{
    std::cout << "Cat copy constructor called\n";
    this->type = original.type;
}

Cat&     Cat::operator=(const Cat &original)
{
    std::cout << "Cat copy assignment operator called\n";
    if (this != &original)
        this->type = original.type;
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


