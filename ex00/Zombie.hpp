/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:52:11 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/15 19:11:08 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <new>
# include <string>

class Zombie
{
	private:
		std::string name;
	public:

		Zombie(std::string name);
        ~Zombie();

		void    announce(void);
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif
