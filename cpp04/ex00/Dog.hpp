/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:00:02 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/02 11:14:46 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
    public:
        void makeSound() const;
        ~Dog();
        Dog();
        Dog(Dog &d);
        Dog& operator=(const Dog &c);
};

#endif