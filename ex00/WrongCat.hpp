/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:53:57 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/15 18:02:09 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:
        std::string type;
    public:
        // orthodox form
        WrongCat();
        WrongCat(const WrongCat& original);
        WrongCat& operator=(const WrongCat &original);
        // mm fct
        void makeSound()const;
        // gettre setter
        std::string const &gettype() const;
        virtual ~WrongCat();
 
    
};



# endif