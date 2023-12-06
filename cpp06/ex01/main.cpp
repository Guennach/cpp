/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:14:53 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/23 13:20:23 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main2()
{
    Serializer *s = Serializer::Init();

    uintptr_t a = s->serialize(s->getData());

    std::cout << "Serialized : " << &a << std::endl;

    Data *b = s->deserialize(a);

    std::cout << "Deserialized : " << &b << std::endl;

    delete s;

    //Another example
    int an = 65; // A = 65
    int *ptr = &an; 
    char *rein = reinterpret_cast<char*>(ptr);
    std::cout << *ptr << " | " << rein << std::endl;
    return (0);
}

int main ()
{
    main2();
    return (0);
}