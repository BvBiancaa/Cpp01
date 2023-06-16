/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:42:35 by bmuni             #+#    #+#             */
/*   Updated: 2023/03/26 21:35:59 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::string	name;

	std::cout << "Name the first heap allocated zombie: \n";
	std::getline (std::cin, name);
	Zombie *M = newZombie(name);
	M->announce();
	delete M;
	std::cout << "Name the second heap allocated zombie: \n";
	std::getline (std::cin, name);
	Zombie *N = newZombie(name);
	N->announce();
	delete N;
	std::cout << "Let's name a stack allocated zombie now: \n";
	std::getline (std::cin, name);
	randomChump(name);
}