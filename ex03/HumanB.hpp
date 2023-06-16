/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bianca <bianca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:52:22 by bmuni             #+#    #+#             */
/*   Updated: 2023/03/27 21:56:41 by bianca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include "Weapon.hpp"

class HumanB
{
	private:
		class Weapon *_w;
	public:
		std::string Weapon;
		std::string name;
		HumanB(std::string n);
		~HumanB();
		void	attack();
		void	setWeapon(class Weapon &w);
};

#endif