/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 21:07:56 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/15 17:59:53 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        // orthodox form
        WrongAnimal();
        WrongAnimal(const WrongAnimal& original);
        WrongAnimal& operator=(const WrongAnimal &original);
        // mm fct
         void makeSound()const;
        // getter setter
        std::string const &get_type() const;
        virtual ~WrongAnimal();
};


#endif