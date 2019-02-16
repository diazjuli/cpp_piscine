/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 13:29:42 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/31 13:29:44 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <string>
#include <iostream>
#include <iterator>
#include <stdexcept>

template<typename T>
bool easyfind(T & cont, int i) {

    typename T::iterator ptr;
    for (ptr = cont.begin(); ptr != cont.end(); ptr++) {
        if (*ptr == i) {
            std::cout << "int " << i << " was found" << std::endl;
            return true;
        }
    }
    std::cout << "int " << i << " not found in container" << std::endl;
    return false;
}

#endif