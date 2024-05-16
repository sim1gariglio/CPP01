/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:47:21 by sgarigli          #+#    #+#             */
/*   Updated: 2024/05/16 10:28:00 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::complain( std::string level )
{
	void (Harl::*funct[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while(level != levels[i] && i < 4)
		i++;
	switch (i)
	{
		case 0:
			(this->*funct[0])();
		case 1:
			(this->*funct[1])();
		case 2:
			(this->*funct[2])();
		case 3:
			(this->*funct[3])();
			break;
		default:
			std::cout << "Invalid level" << std::endl;
			break;			
	}
}

void Harl::debug( void )
{
	std::cout << "DEBUG" << std::endl;
}

void Harl::info( void )
{
	std::cout << "INFO" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "WARNING" << std::endl;
}

void Harl::error( void )
{
	std::cout << "ERROR" << std::endl;
}