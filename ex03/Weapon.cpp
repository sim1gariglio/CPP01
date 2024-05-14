/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:21:49 by sgarigli          #+#    #+#             */
/*   Updated: 2024/05/13 11:40:48 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _Type(type)
{
}

Weapon::~Weapon()
{
}

std::string Weapon::getType(void) const
{
	return (this->_Type);
}

void Weapon::setType(const std::string type)
{
	this->_Type = type;
}