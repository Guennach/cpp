/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:55:53 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/02 14:40:29 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* j = new Dog();
    // const Animal* i = new Cat();

   
    Animal *a = new Dog[4];

    Animal *c = new Cat();

    // Cat *d = new Cat(*c);
    
    // a[0] = new Dog();
    // a[1] = new Dog();
    // a[2] = new Dog();
    // a[3] = new Dog();
    // std::cout << d->getType() << std::endl;
    
    delete j;//should not create a leak
    // delete i;
    delete c;
    // delete d;
    // delete[] a;
    while (1);
    return 0;
}