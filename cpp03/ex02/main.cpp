/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:59:34 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/01 14:33:34 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap t("telha 01");
	FragTrap a("telha 02");

	t.attack("telha 02");// E -= 1 = 9 | Hit : 10 | D = 0
	a.takeDamage(10);
	t.beRepaired(100);
	
	a.attack("telha 01");
	t.takeDamage(10);
	a.beRepaired(10);

	t.highFivesGuys();
}