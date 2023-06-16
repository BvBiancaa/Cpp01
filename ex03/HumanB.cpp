/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bianca <bianca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:52:19 by bmuni             #+#    #+#             */
/*   Updated: 2023/03/27 22:12:50 by bianca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n)
{
	HumanB::name = n;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::attack()
{
	if (HumanB::_w)
		std::cout << HumanB::name << " attacks with their " << HumanB::_w->getType() << "\n";
	else
		std::cout << HumanB::name << " attacks with nothing ): \n";
}

void	HumanB::setWeapon(class Weapon &w)
{
	HumanB::_w = &w;
}