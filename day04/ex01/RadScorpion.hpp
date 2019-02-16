/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 20:37:23 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/26 20:46:17 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy {

private:

public:

	// constructors
	RadScorpion(void);
	RadScorpion(RadScorpion const & src);
	~RadScorpion(void);
	
	//operator overload
	RadScorpion & operator=(RadScorpion const & rhs);
	
};

#endif
