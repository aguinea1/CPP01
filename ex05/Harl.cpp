/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:14:01 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/20 13:21:24 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Hi I am Harl!!" <<std::endl;
}

Harl::~Harl()
{
	std::cout << "Bye Bye" <<std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." <<std::endl;
}

void Harl::warning()
{
	std:: cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}
void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<< std::endl;
}

void    Harl::complain(std::string level)
{
    int i = 0;
    int j = 0;

    std::string message[4] = {"DEBUG", "WARNING", "INFO", "ERROR"};

    while (i < 4)
    {
        if (message[i] == level)
            j = i;
        i++;
    }
	if (i == 4)
	{
		std::cout << "there has been a problem\n";
		return ;
	}
    switch (j)
    {
		case 0:
			    Harl::debug();
				break;
		case 1:
				Harl::warning();
				break;
		case 2:
				Harl::info();
				break;
		case 3:
				Harl::error();
				break;
		default:
				std::cout << "there has been a problem\n";
    }
}
