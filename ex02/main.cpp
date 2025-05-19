/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguinea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:24:05 by aguinea           #+#    #+#             */
/*   Updated: 2025/05/19 18:44:19 by aguinea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str= "HI THIS IS BRAIN";
	std::string* strPTR = &str; //pointer to the string
	std::string& strREF = str; //reference to the string
	std::cout << std::endl << "        ***MEMORIES ADDRESSES***" << std::endl;
	std::cout << "➤ Memory addres of the string variable: "<< &str << std::endl;
	std::cout << "➤ Memory addres held by strPTR: "<< &strPTR << std::endl;
	std::cout << "➤ Memory addres held by strREF: "<< &strREF << std::endl;
	std::cout << std::endl << "               ***VALUES***" << std::endl;
	std::cout << "➤ Value of the string variable: "<< str << std::endl;
	std::cout << "➤ Value pointed to by strPTR: "<< strPTR << std::endl;
	std::cout << "➤ Value pointed to by stringREF: "<< strREF << std::endl;
	return (0);
}

