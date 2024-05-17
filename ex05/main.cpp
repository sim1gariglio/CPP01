/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:45:53 by sgarigli          #+#    #+#             */
/*   Updated: 2024/05/17 11:26:40 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;
	harl.complain("DEBUG");
	std::cout << "-------" <<std::endl;
	harl.complain("INFO");
	std::cout << "-------" <<std::endl;
	harl.complain("WARNING");
	std::cout << "-------" <<std::endl;
	harl.complain("ERROR");
	std::cout << "-------" <<std::endl;
	harl.complain("ERRO");
	std::cout << "-------" <<std::endl;
	return 0;
}