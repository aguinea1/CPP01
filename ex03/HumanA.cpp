/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:07:34 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/19 19:52:27 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):
    weapon(weapon)
{
    this->name = name;
    this->weapon = weapon;
    std::cout << "HumanA: " << name << " was born." << std::endl;

}
HumanA::~HumanA()
{
	std::cout <<"HumanA: " << name << " is dead." <<std::endl;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
