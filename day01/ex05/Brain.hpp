/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 18:22:52 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/23 18:58:22 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <sstream>

class Brain {
	
	public:

		Brain(void);
		~Brain(void);

		std::string identify(void) const;

	private:

		void setAddress(void);
		std::string _address;
};

#endif
