/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:59:34 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/01 14:35:32 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap t("telha 01");
	ScavTrap a("telha 02");

	t.attack("telha 02");
	a.takeDamage(10);

	t.beRepaired(10);

	a.attack("telha 01"); // telha01 Attacked telha02
	t.takeDamage(10);	// take 10 hit point from telha02
	
	a.beRepaired(10);

	t.guardGate();
}