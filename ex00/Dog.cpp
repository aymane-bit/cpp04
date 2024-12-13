/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:17:18 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/13 12:45:37 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constractor called\n"; 
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog destractor called\n";
}

Dog::Dog(const Dog& original)
{
    std::cout << "Dog copy constractor called\n";
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


std::string const &Dog::get_type() const
{
    return this->type; 
}