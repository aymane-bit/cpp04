/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:15:43 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/13 12:45:24 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>

class Dog : public Animal
{
    public :
        // orthodox form
        Dog();
        Dog(const Dog& original);
        Dog& operator=(const Dog &original);
        // mm fct
        void makeSound()const;
        ~Dog();
        std::string const &get_type() const;

};


#endif