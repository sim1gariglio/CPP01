/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:21:59 by sgarigli          #+#    #+#             */
/*   Updated: 2024/05/13 12:21:07 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _Weapon(NULL), _Name(name)
{
}

HumanB::~HumanB()
{
}

std::string HumanB::getName(void) const
{
	return (this->_Name);
}

Weapon &HumanB::getWeapon(void) const
{
	return (*this->_Weapon);
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_Weapon = &weapon;
}

void HumanB::attack()
{
	if (this->_Weapon == NULL)
		std::cout << this->getName() << " has no weapon" << std::endl;
	else
		std::cout << this->getName() << " attacks with his " << this->getWeapon().getType() << std::endl;
}