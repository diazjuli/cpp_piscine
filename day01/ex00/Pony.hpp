/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:50:30 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/22 21:17:44 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <string>
#include <iostream>

class Pony {

	public:

		Pony(std::string name, int age);
		~Pony(void);

		int	getAge(void) const;
		std::string getName(void) const;

	private:

		std::string name;
		int age;
};

#endif
