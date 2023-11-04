/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:59:53 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/02 13:45:19 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        Animal(Animal &a);
        Animal& operator=(const Animal &a);
        void setType(std::string type);
        std::string getType() const;
        virtual void makeSound() const; 
};

#endif