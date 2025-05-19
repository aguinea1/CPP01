/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:16:17 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/19 19:52:44 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
# include "HumanA.hpp"
# include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
	this->has_weapon = false;
    std::cout << "HumanB: " << name << " was born." << std::endl;

}
HumanB::~HumanB()
{
	std::cout <<"HumanB: " << name << " is dead." <<std::endl;
}

void	HumanB::attack()
{
	if (this->has_weapon == false)
		std::cout << this->name << "Has no gun"<< std::endl;
	else
		std::cout << this->name << " attacks with their " <<this->weapon->getType() << std::endl;
}
void	HumanB::setWeapon(Weapon &weapon)
{
	this->has_weapon = true;
	this->weapon = &weapon;
}


