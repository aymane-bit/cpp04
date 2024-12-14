/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:07:23 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/14 18:26:25 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called for \n"; 
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called\n";
}

WrongCat::WrongCat(const WrongCat& original) : WrongAnimal(original)
{
    std::cout << "WrongCat copy constructor called\n";
    this->type = original.type;
}

WrongCat&     WrongCat::operator=(const WrongCat &original)
{
    std::cout << "WrongCat copy assignment operator called\n";
    if (this != &original)
        this->type = original.type;
    return *this;
}


std::string const &WrongCat::gettype() const
{
    return this->type; 
}
void WrongCat::makeSound() const
{
    std::cout << "!! WRONG CAT !!\n";
}