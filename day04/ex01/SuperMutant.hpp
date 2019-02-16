/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 20:23:20 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/26 20:37:02 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class  SuperMutant : public Enemy {
	
public:

	// constructors
	SuperMutant(void);
	SuperMutant(SuperMutant const & src);
	~SuperMutant(void);

	// operator overloads
	SuperMutant & operator=(SuperMutant const & rhs);

	virtual void takeDamage(int damage);

private:

};

#endif
