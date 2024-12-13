/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 21:07:56 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/13 12:42:29 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        // orthodox form
        Animal();
        Animal(const Animal& original);
        Animal& operator=(const Animal &original);
        // mm fct
        virtual void makeSound()const;
        // gettre setter
        std::string const &get_type() const;
        ~Animal();
};





#endif