/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:47:21 by sgarigli          #+#    #+#             */
/*   Updated: 2024/05/17 11:27:34 by sgarigli         ###   ########.fr       */
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
	while (i < 4)
	{
		if (level == levels[i])
		{
			(this->*funct[i])();
			return;
		}
		i++;
	}
	if (i == 4)
	{
		std::cout << "Invalid level" << std::endl;
		return;
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