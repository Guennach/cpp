/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:59:34 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/26 11:05:35 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap b;
	
	a.setName("telha");
	a.setAttackDmg(10);
	a.setEnergyPoint(10);
	a.setHitPoint(10);
	
	ClapTrap t(a);
	
	t.attack("ANA");
	t.takeDamage(10);
	t.takeDamage(10);
	t.beRepaired(10);
}