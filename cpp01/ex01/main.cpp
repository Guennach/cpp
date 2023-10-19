/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gothmane <gothmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:04:32 by gothmane          #+#    #+#             */
/*   Updated: 2023/10/19 12:13:57 by gothmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main_process()
{
	Zombie	s;
	int		n = 10;
	
	Zombie *a = s.zombieHorde(n, "AYAC");
	
	if (a)
	{
		for (int i = 0; i < n; i++)
			a[i].announce();
		delete[] a;
	}
	else
	{
		std::cerr << "An error occured" << std::endl;
		return (1);
	}
	return (0);
}

int main()
{
	if (main_process() == 1)
		return (1);
	return (0);
}