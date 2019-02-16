/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 18:37:49 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/23 18:58:24 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human {
	
	public:

		Human(void);
		~Human(void);

		std::string identify(void) const;
		Brain getBrain(void) const;

	private:

		Brain const _brain;
};

#endif
