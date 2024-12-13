/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 21:11:52 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/13 12:45:49 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constractor called for \n"; 
    this->type = "animal";
}

Animal::~Animal()
{
    std::cout << "Animal destractor called\n";
}

Animal::Animal(const Animal& original)
{
    std::cout << "Animal copy constractor called\n";
    this->type = original.type;
}

Animal&     Animal::operator=(const Animal &original)
{
    std::cout << "Animal copy assignment operator called\n";
    if (this != &original)
        this->type = original.type;
    return *this;
}


std::string const &Animal::gettype() const
{
    return this->type; 
}
void Animal::makeSound() const
{
    std::cout << "!! universal sound !!\n";
}