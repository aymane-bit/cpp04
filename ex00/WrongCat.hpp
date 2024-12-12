/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:53:57 by akajjou           #+#    #+#             */
/*   Updated: 2024/12/11 18:07:08 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>


class WrongCat
{
    private:
        std::string type;
    public:
        // orthodox form
        WrongCat();
        WrongCat(const WrongCat& original);
        WrongCat& operator=(const WrongCat &original);
        // mm fct
        virtual void makeSound()const;
        // gettre setter
        std::string const &get_type() const;
        ~WrongCat();
 
    
};



# endif