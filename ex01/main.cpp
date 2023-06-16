/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:42:35 by bmuni             #+#    #+#             */
/*   Updated: 2023/03/27 17:23:57 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::string	name;
	int	n;
	int	i;
	Zombie *Zombie1;

	i = -1;
	std::cout << "How big is our zombies horde?\n";
	std::getline (std::cin, name);
	char    copy[name.length()];
      strcpy(copy, name.c_str());
	n = atoi(copy);
	std::cout << "Choose a name for all the zombies: \n";
	std::cin.clear();
	std::getline (std::cin, name);
	Zombie1 = zombieHorde(n, name);
	while (++i < n)
		Zombie1[i].announce();
	delete [] Zombie1;
}