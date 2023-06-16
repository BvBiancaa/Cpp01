/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:41:53 by bmuni             #+#    #+#             */
/*   Updated: 2023/03/27 17:30:14 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setname(std::string n)
{
      Zombie::name = n;
}

std::string	Zombie::getName()
{
	return (Zombie::name);
}

void	Zombie::announce(void)
{
	std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie* newZombie(std::string name)
{
	Zombie *Zombie1 = new Zombie();
	Zombie1->setname(name);
	return (Zombie1);
}

Zombie::~Zombie(void)
{
	std::cout << "bye " << Zombie::name << " ):" << std::endl;
	return ;
}

Zombie::Zombie(void)
{
	return ;
}

void	randomChump(std::string name)
{
	Zombie M;
	M.setname(name);
	std::cout << M.getName() << ": BraiiiiiiinnnzzzZ...\n";
}