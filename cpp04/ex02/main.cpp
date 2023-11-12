/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:55:53 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/07 16:28:34 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main2()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* w = new WrongCat();

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    w->makeSound();

    delete i;
    delete j;
    delete w;
    return (0);
}

int main() {
    main2();
    system("leaks Pure");
}