/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:55:38 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/19 21:12:04 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <fstream>

std::string	replaceString(std::string &line, std::string search, std::string replace, int len)
{
	std::size_t position = 0;
	std::size_t found = 0;
	std::string res;

	while ((found = line.find(search, position)) != std::string::npos)
	{
		res += line.substr(position, found - position);
		res += replace;
		position = found + len;
	}
	res += line.substr(position);
	return res;
}





int main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "Wrong parameters" << std::endl;
	else
	{
		std::ifstream file(av[1]);
		if (!file.is_open()) 
		{
			std::cerr << "Error: Can't open file: " << av[1] << std::endl;
			return (1);
		}
		std::string name_file = av[1];
		std::string	search = av[2];
		std::string replace = av[3];
		std::string out = name_file + ".replace";
		std::ofstream outfile(out.c_str());
		if (!outfile) 
		{
			std::cerr << "Error: Cannot create file: " << av[1] << ".replace" <<std::endl;
			return (1);
		}
		std::string line;
		int len = std::string(av[2]).size();
		while (std::getline(file, line))
			outfile << replaceString(line, search, replace, len) << std::endl;

		file.close();
		outfile.close();
	}
	return (0);
}
