/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:02:26 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/02 11:39:09 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>

#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
    private:
        std::string type;
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat &wa);
        WrongCat& operator=(const WrongCat &wa);
        void makeSound() const;
};

#endif