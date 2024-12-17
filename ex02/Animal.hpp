/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 21:07:56 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/17 16:43:12 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        // orthodox form
        AAnimal();
        AAnimal(const AAnimal& original);
        AAnimal& operator=(const AAnimal &original);
        // mm fct
        virtual void makeSound()const = 0;
        // getter setter
        std::string const &gettype() const;
        virtual ~AAnimal();
};





#endif