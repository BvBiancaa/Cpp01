/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:42:40 by bmuni             #+#    #+#             */
/*   Updated: 2023/03/27 17:27:53 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <ctime>

class	Zombie
{
	private:
		std::string name;
	public:
		Zombie(void);
    		~Zombie(void);
		void setname(std::string n);
		std::string getName();
   		void    announce( void );
};

Zombie	*newZombie(std::string name);
void		randomChump(std::string name);

#endif