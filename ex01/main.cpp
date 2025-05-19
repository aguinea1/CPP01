/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:51:55 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/19 18:19:25 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
#include <limits>

bool ValidInput(int& value)
{
    std::cin >> value;

    if (std::cin.fail() || value <= 0)
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return false;
    }

    return true;
}
int main(void)
{
	Zombie *z1;
	int size, i = 0;

	std::cout << "Enter horde size :";
	while (!ValidInput(size))
		std::cout << "Invalid size, Try again :" << std::endl;

	std::cout << "Number entered: "<< size << std::endl;
	z1 = zombieHorde(size, "PAAAAAAAA");
    while (i < size)
    {
        std::cout << i + 1  << " out of "<< size << std::endl;
        z1[i].announce();
        i++;        
    }
	delete[] z1;
	return(0);
}
