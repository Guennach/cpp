/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:36:55 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/26 15:16:32 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main_2()
{
    IMateriaSource* src = new MateriaSource();  // creation of the MateriaSource
    src->learnMateria(new Ice());   // creation of Ice object
    src->learnMateria(new Cure()); // creation of Cure object
    ICharacter* me = new Character("me"); // init of the character named "me"
    AMateria* tmp;

    tmp = src->createMateria("cure");
    me->equip(tmp);         // equip the cure materia
    me->equip(tmp);         // passing the same address to the array,
    src->learnMateria(tmp); // if you remove the learn materia you gotta delete the tmp as it gonna leak,

    tmp = src->createMateria("ice");
    AMateria *a = new Ice();
    me->equip(a);  
    me->equip(a);          // equip the ice materia
    me->equip(new Ice()); 
    src->learnMateria(tmp); // if you remove the learn materia you gotta delete the tmp as it gonna leak,
    ICharacter* bob = new Character("bob"); // init of the character "bob"
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(2, *bob);
    me->use(2, *bob);
    me->use(2, *bob);
    me->use(3, *bob);           // testing random idx that doesn't exist

    // Handling memory leaks
    delete bob;
    delete me;
    delete src;
    delete a;
    // delete tmp;
    return 0;
}

int main()
{
    main_2();
    system("leaks Materia");
    return 0;
}