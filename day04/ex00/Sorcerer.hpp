/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 22:04:23 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/25 23:02:08 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include "Victim.hpp"
# include <iostream>

class Sorcerer {

public: 

	//constructors
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const & src);
	~Sorcerer(void);

	//overloads
	Sorcerer & operator=(Sorcerer const & rhs);

	//getter functions
	std::string introduce(void) const;
	std::string getName(void) const;
	std::string getTitle(void) const;

	void		polymorph(Victim const & victim) const;

private:

	//constructor
	Sorcerer(void);

protected:

	//member variables
	std::string _name;
	std::string _title;
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);

#endif
