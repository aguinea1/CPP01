/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:48:13 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/19 19:50:28 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Weapon_HPP
# define Weapon_HPP
# include <iostream>
# include <new>
# include <string>

class Weapon
{
	private:
		std::string type;
	public:

		Weapon(std::string type);
		~Weapon();
		std::string	getType();
		void	setType(std::string);

};

#endif

