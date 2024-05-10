/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:21:49 by sgarigli          #+#    #+#             */
/*   Updated: 2024/05/10 12:34:06 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _Type(type)
{
	std::cout << getType() << " created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << getType() << " destoyed" << std::endl;
}

std::string Weapon::getType(void) const
{
	return (_Type);
}

void Weapon::setType(const std::string type)
{
	this->_Type = type;
}