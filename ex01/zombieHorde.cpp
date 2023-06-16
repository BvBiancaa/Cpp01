/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:30:56 by bmuni             #+#    #+#             */
/*   Updated: 2023/03/27 17:30:59 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int	i;

	i = -1;
	Zombie *Zombie1 = new Zombie[N];
	while (++i < N)
	Zombie1[i].setname(name);
	return (Zombie1);
}