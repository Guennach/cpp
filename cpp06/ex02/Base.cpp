/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:12:49 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/23 14:00:31 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base(){}

Base::~Base(){}

Base::Base(const Base &b)
{
    *this = b;
}

Base& Base::operator=(const Base &b)
{
    if (this != &b)
        (void) b;
    return (*this);
}

Base* generate(void)
{
    std::srand(time(NULL));
    
    int nbr = std::rand() % 3;
    if (nbr == 0)
        return new A();
    else if (nbr == 2)
        return new B();
    else 
        return new C();
}

void identify(Base* p)
{
    if (p == NULL)
        std::cout << "Your can't cast a NULL OBJECT!" << std::endl;
    else if (dynamic_cast<A*>(p))
        std::cout << "Type of : A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Type of : B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Type of : C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        if (dynamic_cast<A*>(&p))
            std::cout << "Type of : A" << std::endl;
        else if (dynamic_cast<B*>(&p))
            std::cout << "Type of : B" << std::endl;
        else if (dynamic_cast<C*>(&p))
            std::cout << "Type of : C" << std::endl;
    }
    catch(std::bad_cast& e)
    {
        std::cout << "Type cast failed: " << e.what() << std::endl;
    }
}