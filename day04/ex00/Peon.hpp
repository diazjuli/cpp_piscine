/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 23:02:32 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/25 23:10:42 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim {
	
public:

	//constructors
	Peon(std::string name);
	Peon(Peon const & src);
	~Peon(void);

	//overloads
	Peon & operator=(Peon const & rhs);

	virtual void getPolymorphed(void) const;

private:

	//constructors
	Peon(void);
};

#endif
