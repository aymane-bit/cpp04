/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 21:11:52 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/14 18:26:25 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called for \n"; 
    this->type = "Wronganimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& original)
{
    std::cout << "WrongAnimal copy constructor called\n";
    this->type = original.type;
}

WrongAnimal&     WrongAnimal::operator=(const WrongAnimal &original)
{
    std::cout << "WrongAnimal copy assignment operator called\n";
    if (this != &original)
        this->type = original.type;
    return *this;
}


std::string const &WrongAnimal::get_type() const
{
    return this->type; 
}
void WrongAnimal::makeSound() const
{
    std::cout << "!! universal wrong animal sound !!\n";
}