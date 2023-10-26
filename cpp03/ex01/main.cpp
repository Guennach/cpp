/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:59:34 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/26 12:14:18 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap a("telha");

	a.attack("ANA");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(10);
	
	ScavTrap sv("Scav telha");
	
	sv.attack("ANA");
	sv.takeDamage(10);
	sv.takeDamage(10);
	sv.beRepaired(10);
}