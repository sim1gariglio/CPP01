/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:45:56 by sgarigli          #+#    #+#             */
/*   Updated: 2024/05/14 16:45:57 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cerr << "Needs 3 arguments!!" << std::endl;
		return 1;
	}
	std::ifstream infile(av[1]);
	if (!infile.is_open())
	{
		std::cerr << "File not found!!" << std::endl;
		return 1;
	}
	if (std::strlen(av[1]) == 0)
	{
		std::cerr << "File name is empty!!" << std::endl;
		return 1;
	}
	std::string oldstring = av[2];
	if (oldstring.empty())
	{
		std::cerr << "Empty string!!" << std::endl;
		return 1;
	}
	std::string newstring = av[3];
	std::string FileName = (std::string)av[1] + ".replace";
	std::ofstream outfile(FileName.c_str());
	std::string FileToLine;
	std::getline(infile, FileToLine, '\0');

	size_t i = 0;
	while (i <= FileToLine.length() - oldstring.length())
    {
        if (FileToLine.substr(i, oldstring.length()) == oldstring)
        {
            FileToLine.erase(i, oldstring.length());
            FileToLine.insert(i, newstring);
            i += newstring.length();
        }
        else
            i++;
    }
	outfile << FileToLine;
	infile.close();
	outfile.close();
	return 0;
}