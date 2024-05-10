/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:21:57 by sgarigli          #+#    #+#             */
/*   Updated: 2024/05/10 12:30:55 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, std::string weapon) : _Weapon(weapon), _Name(name)
{
	std::cout << getName() << " created" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << getName() << " destroyed" << std::endl;
}

void HumanA::attack()
{
	std::cout << getName() << " attacks with his " << _Weapon.getType() << std::endl;
}

std::string HumanA::getName(void) const
{
	return (_Name);
}

void HumanA::setName(const std::string name)
{
	this->_Name = name;
}

std::string HumanA::getWeapon(void) const
{
	return (_Weapon.getType());
}

void HumanA::setWeapon(const std::string weapon)
{
	this->_Weapon.setType(weapon);
}