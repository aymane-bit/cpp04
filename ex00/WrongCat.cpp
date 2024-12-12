/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:07:23 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/11 18:08:29 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constractor called for \n"; 
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destractor called\n";
    delete this;
}

WrongCat::WrongCat(const WrongCat& original)
{
    std::cout << "WrongCat copy constractor called\n";
    this->type = original.type;
}

WrongCat&     WrongCat::operator=(const WrongCat &original)
{
    std::cout << "WrongCat copy assignment operator called\n";
    if (this != &original)
        this->type = original.type;
    return *this;
}


std::string const &WrongCat::get_type() const
{
    return this->type; 
}
void WrongCat::makeSound() const
{
    std::cout << "!! universal sound !!\n";
}