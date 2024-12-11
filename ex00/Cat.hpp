/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:15:43 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/11 13:14:15 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class Cat : public Animal
{
    private :
        std::string type;
    public :
        // orthodox form
        Cat();
        Cat(const Cat& original);
        Cat& operator=(const Cat &original);
        // mm fct
        void makeSound()const;
        std::string const &get_type() const;
        ~Cat();
};


#endif