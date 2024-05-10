/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:21:59 by sgarigli          #+#    #+#             */
/*   Updated: 2024/05/10 12:40:34 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _Weapon("default"), _Name(name)
{
	std::cout << getName() << " created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << getName() << " destroyed" << std::endl;
}

std::string HumanB::getName(void) const
{
	return (_Name);
}

void HumanB::setName(const std::string name)
{
	this->_Name = name;
}
void HumanB::setWeapon(Weapon weapon)
{
	this->_Weapon = weapon;
}

std::string HumanB::getWeapon(void) const
{
	return (_Weapon.getType());
}

void HumanB::attack()
{
	std::cout << getName() << " attacks with his " << _Weapon.getType() << std::endl;
}