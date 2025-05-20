/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:09:54 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/20 13:14:54 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Harl_HPP
# define Harl_HPP
# include <iostream>
# include <new>
# include <string>

class Harl
{
	private:
		void error();
		void warning();
		void info();
		void debug();
	public:
		~Harl();
		Harl();
		void complain(std::string level);
};

#endif
