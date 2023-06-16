/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmuni <bmuni@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:52:25 by bmuni             #+#    #+#             */
/*   Updated: 2023/03/28 14:33:01 by bmuni            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	count_lines(char *s)
{
	int lines;
	std::string line;
	std::fstream m;

	lines = 0;
	m.open(s);
	if (m.is_open())
  	{
		while (std::getline (m, line))
			lines++;
	}
	m.close();
	return (lines + 1);
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		int	pos;
		int	y;
		int	count;
		int	lines;
		std::string line;
		std::fstream m;
		std::string conv;
	
		count = 0;
		y = -1;
		lines = count_lines(av[1]);
		std::string dS[lines];
		m.open(av[1]);
		if (m.is_open())
  		{
			while (std::getline (m, line))
			{
				pos = 0;
				if (strstr(line.c_str(), av[2]))
				{
					while (strstr(line.c_str() + pos, av[2]))
					{
						conv.assign(av[2], strlen(av[2]));
						pos = line.find(conv, pos);
						line.erase(pos, conv.length());
						line.insert(pos, av[3]);
					}
				}
				dS[count] = line;
				count++;
			}
			m.close();
		}
		else
			std::cout << "Cannot open the file!\n";
		conv.assign(av[1], strlen(av[1]));
		m.open(conv.append(".replace").c_str(), std::ios::trunc | std::ios::out);
		if (m.is_open())
  		{
			while (++y < count)
				m << dS[y] << "\n";
			m.close();
		}
		else
			std::cout << "Cannot modify the file\n";
	}
	else
		std::cout << "Wrong file number!\n";
}