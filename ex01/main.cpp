/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:44:45 by sgarigli          #+#    #+#             */
/*   Updated: 2024/05/09 15:34:51 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
	int n = 10;
	Zombie *zombie = zombieHorde(n,"Simone");
	for (int i = 0; i < n; i++)
		zombie[i].announce();
	delete[] zombie;
	return (0);
}