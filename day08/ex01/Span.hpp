/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 15:10:49 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/31 15:10:51 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <set>
#include <stdexcept>

class Span {
public:
    //constructors 
    Span(unsigned int n);
    Span(Span const & src);
    ~Span(void);

    //operator overloads
    Span & operator=(Span const & rhs);

    void addNumber(int add);
    int shortestSpan(void) const;
    int longestSpan(void) const;

    unsigned int    getMax(void) const;
    unsigned int    getCount(void) const;
    std::set<int> * getSet(void) const;

private:
    //constructor
    Span(void);

    unsigned int const  _max;
    unsigned int        _count;
    std::set<int>       *_set;
};

#endif
