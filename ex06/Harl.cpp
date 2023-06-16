#include "Harl.hpp"

Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	Harl::info();
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	Harl::warning();
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	Harl::error();
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	Harl* px = new Harl;
	int	i;

	std::string	lvl[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	void (Harl::*cmd[4])( void ) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	for (int m = 0; m <= 4; m++)
	{
		i = m;
		if (i == 4)
			break ;
		if (strcmp(level.c_str(), lvl[i].c_str()) == 0)
			break ;
	}
	const	int	p = i;
	switch (p)
	{
		case 0:
			(px->*cmd[0])();
			break;
		case 1:
			(px->*cmd[1])();
			break;
		case 2:
			(px->*cmd[2])();
			break;
		case 3:
			(px->*cmd[3])();
			break;
		default:
			std::cout << "Probably complaining about insignificant problems\n";
			break;
	}
	delete px;
}