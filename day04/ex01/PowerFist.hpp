/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 19:51:29 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/26 20:02:34 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {

private:

public:
	
	//constructors
	PowerFist(void);
	PowerFist(PowerFist const & src);
	~PowerFist(void);

	//overloads
	PowerFist & operator=(PowerFist const & rhs);
	virtual void attack(void) const;
};

#endif
