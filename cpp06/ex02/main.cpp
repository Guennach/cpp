/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:12:32 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/23 14:00:38 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main2()
{
    Base *b = new Base();

    Base *g = generate();

    Base *a = new C();

    identify(a); //Gonna return C

    identify(g); //Gonna return B

    delete b;
    delete a;
    delete g;
    return (0);
}

int main ()
{
    main2();
    return (0);
}