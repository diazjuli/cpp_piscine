/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 17:56:44 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/23 18:05:28 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS A BRAIN";
	std::string *strPointer = &str;
	std::string &strRef = str;

	std::cout << "Pointer: " << *strPointer << std::endl;
	std::cout << "Reference: " << strRef << std::endl;
	return (0);
}
