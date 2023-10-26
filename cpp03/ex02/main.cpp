/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:59:34 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/26 12:22:07 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap a("telha");

	a.attack("ANA");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(10);
	
	ScavTrap sv("Scav telha");
	
	sv.attack("SCAV ANA");
	sv.takeDamage(10);
	sv.takeDamage(10);
	sv.beRepaired(10);
	
	sv.guardGate();
	
	FragTrap ft("Frag telha");
	
	ft.attack("FRAG ANA");
	ft.takeDamage(10);
	ft.takeDamage(10);
	ft.beRepaired(10);
	
	ft.highFivesGuys();
}