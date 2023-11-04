/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:17:44 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/04 10:45:01 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    private:
        /* data */
    public:
        Cure(/* args */);
        ~Cure();
        Cure(Cure &c);
        Cure &operator=(Cure &copy);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif