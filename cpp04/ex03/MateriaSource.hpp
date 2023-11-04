/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:51:37 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/04 11:24:07 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
    private:
        AMateria *stocks[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(MateriaSource &ms);
        void learnMateria(AMateria *ora);
        AMateria* createMateria(std::string const & type);
};

#endif