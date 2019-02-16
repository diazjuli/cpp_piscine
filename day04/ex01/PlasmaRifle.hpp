/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 19:32:04 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/26 19:38:48 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
	
private:

public:

	//constructors	
	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const & src);
	~PlasmaRifle(void);

	//overloads
	PlasmaRifle & operator=(PlasmaRifle const & rhs);

	virtual void attack(void) const;
};

#endif
