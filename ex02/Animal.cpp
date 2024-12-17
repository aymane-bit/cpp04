/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 21:11:52 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/17 16:43:19 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal default constructor called for \n"; 
    this->type = "animal";
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called\n";
}

AAnimal::AAnimal(const AAnimal& original)
{
    std::cout << "AAnimal copy constructor called\n";
    this->type = original.type;
}

AAnimal&     AAnimal::operator=(const AAnimal &original)
{
    std::cout << "AAnimal copy assignment operator called\n";
    if (this != &original)
        this->type = original.type;
    return *this;
}


std::string const &AAnimal::gettype() const
{
    return this->type; 
}
