/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:52:11 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/19 17:52:43 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_HPP
# define Zombie_HPP
# include <iostream>
# include <new>
# include <string>

class Zombie
{
	private:
		std::string name;
	public:

		Zombie();
		Zombie(std::string name);
        ~Zombie();

		void    announce(void);

};

Zombie* zombieHorde( int N, std::string name );

#endif
