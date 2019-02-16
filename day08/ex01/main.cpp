/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 17:38:45 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/31 17:39:08 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(5);
    sp.addNumber(5);
    sp.addNumber(9);
    sp.addNumber(11);
    try {
        sp.addNumber(11);
    }
    catch (std::exception &e) {
        std::cout << "max number of element reached" << std::endl;
        e.what();
    }
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}
