/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 18:18:39 by aymane            #+#    #+#             */
/*   Updated: 2024/12/14 18:34:17 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor called\n";
}

Brain::Brain(const Brain &original)
{
    std::cout << "Brain copy constructor called\n";
    for (int i = 0; i < 100; ++i) 
    {
            this->ideas[i] = original.ideas[i];
    }
}

Brain&  Brain::operator=(const Brain &original)
{
    std::cout << "Brain copy assignment operator called!\n";
        if (this != &original) 
        {
            for (int i = 0; i < 100; ++i) 
            {
                this->ideas[i] = original.ideas[i];
            }
        }
        return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destroyed!\n"; 
}