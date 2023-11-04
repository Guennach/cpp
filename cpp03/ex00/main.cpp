/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:59:34 by gothmane          #+#    #+#             */
/*   Updated: 2023/11/01 11:24:35 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap t("telha 01");
	ClapTrap a("telha 02");

	t.attack("telha 02");// E -= 1 = 9 | Hit : 10 | D = 0
	a.takeDamage(10);//Hit = 0 | E = 10 | D = 0
	t.beRepaired(10);//E -= 1 = 8 | Hit : 20 | D = 0

	a.attack("telha 01");//E -= 1 = 9 | Hit : 0 | D = 0
	t.takeDamage(10);//Hit = 10 | E = 8 | D = 0
	a.beRepaired(10);//E -= 1 = 8 | Hit : 10 | D = 0
}