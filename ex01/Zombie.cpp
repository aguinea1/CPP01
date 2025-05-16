/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 19:33:27 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/16 12:25:54 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "zombie: " << name << " created !!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "zombie: " << name << " destroyed !!" << std::endl;
}

void    Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::Naming(std::string)
{
	this->name = name;
}

Zombie::Zombie(std::string name)
{
	this->name=name;
}
