/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bianca <bianca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:52:09 by bmuni             #+#    #+#             */
/*   Updated: 2023/03/27 21:57:01 by bianca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string n, class Weapon &w)
{
	HumanA::name = n;
	HumanA::_w = &w;
}

HumanA::~HumanA()
{
	return ;
}

void	HumanA::attack()
{
	std::cout << HumanA::name << " attacks with their " << HumanA::_w->getType() << "\n";
}