/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:15:43 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/17 16:42:48 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog : public AAnimal
{
    public :
        // orthodox form
        Dog();
        Dog(const Dog& original);
        Dog& operator=(const Dog &original);
        // mm fct
        void makeSound()const;
        virtual ~Dog();
        std::string const &gettype() const;
    private :
        Brain *brain;
};


#endif