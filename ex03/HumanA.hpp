/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:09:39 by sgarigli          #+#    #+#             */
/*   Updated: 2024/05/10 12:30:41 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	class::Weapon _Weapon;
	std::string _Name;
public:
	HumanA(std::string name, std::string weapon);
	~HumanA();
	std::string getName(void) const;
	void setName(const std::string name);
	std::string getWeapon(void) const;
	void setWeapon(const std::string weapon);
	void attack();
};

#endif

