/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:13:18 by sgarigli          #+#    #+#             */
/*   Updated: 2024/05/10 12:36:55 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		class::Weapon _Weapon;
		std::string _Name;
	public:
		HumanB(std::string name);
		~HumanB();
		std::string getName(void) const;
		void setName(const std::string name);
		std::string getWeapon(void) const;
		void setWeapon(class::Weapon weapon);
		void attack();
};

#endif