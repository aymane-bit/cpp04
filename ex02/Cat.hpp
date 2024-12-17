/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:15:43 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/17 16:41:55 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat : public AAnimal
{
    public :
        // orthodox form
        Cat();
        Cat(const Cat& original);
        Cat& operator=(const Cat &original);
        // mm fct
        void makeSound()const;
        std::string const &gettype() const;
        virtual ~Cat();
    private :
        Brain *brain;
};


#endif