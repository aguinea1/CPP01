/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:12:37 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/19 19:50:51 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
# define HumanB_HPP
# include "Weapon.hpp"
# include "HumanA.hpp"
# include <iostream>
# include <new>
# include <string>

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
		bool	has_weapon;
	public:
		HumanB(std::string(name));
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &weapon);
};

#endif
