/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 21:07:56 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/11 13:15:56 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    private:
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