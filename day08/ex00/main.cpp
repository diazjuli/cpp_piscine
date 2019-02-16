/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 13:29:49 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/31 13:29:51 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyFind.hpp"

#include <vector>
#include <array>
#include <queue>
#include <algorithm>
#include <list>

int main(void) {
    std::vector<int> vect(3, 10);
    vect[0] = 0;
    vect[1] = 1;
    vect[2] = 2;

    std::deque<int> deque(3,10);
    deque[0] = 0;
    deque[1] = 2;
    deque[2] = 3;

    std::list<int>    lst;
    lst.push_back(4);
    lst.push_back(8);
    lst.push_back(15);

    easyfind(vect, 2);
    easyfind(deque, 5);
    easyfind(lst, 82);
    return 0;
}