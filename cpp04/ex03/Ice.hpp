/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:18:01 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/04 10:45:10 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    private:
        /* data */
    public:
        Ice(/* args */);
        ~Ice();
        Ice(Ice &c);
        Ice &operator=(Ice &copy);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif