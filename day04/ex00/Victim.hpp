/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 22:40:30 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/25 23:00:43 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim {

public:

	//constructors
	Victim(std::string name);
	Victim(Victim const & src);
	~Victim(void);

	//overloads
	Victim & operator=(Victim const & rhs);

	//getter functions
	std::string		getName(void) const;

	std::string		introduce(void) const;
	virtual void	getPolymorphed(void) const;
protected:

	//member attributes
	std::string _name;

private:

	//constructor
	Victim(void);
};

std::ostream & operator<<(std::ostream & o, Victim & rhs);

#endif
