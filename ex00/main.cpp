/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:51:55 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/21 14:52:03 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *ZombI = newZombie("HOOOOOOOOO");
	ZombI->announce();
	randomChump("KEEEEEEEEE");
	delete ZombI;
	return (0);
}
