/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bianca <bianca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:52:31 by bmuni             #+#    #+#             */
/*   Updated: 2023/03/27 21:14:38 by bianca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

void	Weapon::setType(std::string str)
{
	Weapon::type = str;
}

std::string	Weapon::getType()
{
	return (Weapon::type);
}

Weapon::Weapon(std::string t)
{
	Weapon::setType(t);
}

Weapon::~Weapon(void)
{
	return;
}