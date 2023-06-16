/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bianca <bianca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:52:34 by bmuni             #+#    #+#             */
/*   Updated: 2023/03/27 21:46:11 by bianca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <ctime>

class Weapon
{
	private:
		std::string type;
	public:
	Weapon(std::string t);
	~Weapon(void);
	std::string getType(void);
	void	setType(std::string str);
};

#endif