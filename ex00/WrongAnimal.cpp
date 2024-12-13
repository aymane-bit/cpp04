/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 21:11:52 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/13 12:17:35 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constractor called for \n"; 
    this->type = "Wronganimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destractor called\n";
    delete this;
}

WrongAnimal::WrongAnimal(const WrongAnimal& original)
{
    std::cout << "WrongAnimal copy constractor called\n";
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
    std::cout << "!! universal sound !!\n";
}