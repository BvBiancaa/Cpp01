/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bianca <bianca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:52:15 by bmuni             #+#    #+#             */
/*   Updated: 2023/03/27 21:54:49 by bianca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon *_w;
	public:
		std::string weapon;
		std::string name;
		HumanA(std::string n, class Weapon &w);
		~HumanA();
		void	attack();
};

#endif