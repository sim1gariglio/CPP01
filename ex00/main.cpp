/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:44:45 by sgarigli          #+#    #+#             */
/*   Updated: 2024/05/09 15:14:23 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
	randomChump("Marco");
	Zombie *zombie = newZombie("Simone");
	zombie->announce();
	delete zombie;
	return (0);
}