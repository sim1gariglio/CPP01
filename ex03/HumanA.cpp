/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:21:57 by sgarigli          #+#    #+#             */
/*   Updated: 2024/05/13 11:47:07 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _Weapon(weapon), _Name(name)
{
}

HumanA::~HumanA()
{
}

std::string HumanA::getName(void) const
{
	return (this->_Name);
}

Weapon &HumanA::getWeapon(void) const
{
	return (this->_Weapon);
}

void HumanA::attack()
{
	std::cout << this->getName() << " attacks with his " << this->getWeapon().getType() << std::endl;
}