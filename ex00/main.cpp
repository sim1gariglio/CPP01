/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:44:45 by sgarigli          #+#    #+#             */
/*   Updated: 2024/05/09 12:09:36 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("Simone");
	zombie->announce();
	randomChump("Marco");
	delete zombie;
	return (0);
}