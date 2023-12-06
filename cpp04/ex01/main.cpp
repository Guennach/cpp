/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:55:53 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/21 11:09:18 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main2()
{
    // const Animal *j = new Dog();
    // const Animal *i = new Cat();

    // delete j; // should not create a leak
    // delete i;

    // Animal *a[4];

    // a[0] = new Dog();
    // a[1] = new Dog();
    // a[2] = new Cat();
    // a[3] = new Cat();

    // for (int i = 0; i < 4; i++)
    //     delete a[i];
    // Dog basic;

    // Dog tmp = basic;

    Cat *a = new Cat();
    Cat *b(a);

    (void) b;
    return 0;
}

int main()
{
    main2();
    // system("leaks Brain");
}