/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:17:18 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/13 12:45:43 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constractor called\n"; 
    type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat destractor called\n";
}

Cat::Cat(const Cat& original) : Animal(original)
{
    std::cout << "Cat copy constractor called\n";
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


