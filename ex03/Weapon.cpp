/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:50:47 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/19 19:37:47 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	Weapon::getType()
{
	return(this->type);
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{

}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
