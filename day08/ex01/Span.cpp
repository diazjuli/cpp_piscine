/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 15:10:57 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/31 15:10:58 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
//constructors
Span::Span(void) : _max(0), _count(0), _set(NULL) {
    return;
}

Span::Span(unsigned int n) : _max(n), _count(0), _set(NULL){
    this->_set = new std::set<int>();
    return;
}

Span::Span(Span const & src) : _max(src.getMax()){
    *this = src;
    return;
}

Span::~Span(void) {
    return;
}

//operator overloads
Span & Span::operator=(Span const & rhs) {
    if (rhs.getCount() > this->_max)
        std::overflow_error("Error : container is full.");
    this->_count = rhs.getCount();
    this->_set = rhs.getSet();
    return (*this);
}

void Span::addNumber(int add) {
    if (this->_count == this->_max)
        throw std::exception();
    this->_set->insert(add);
    this->_count += 1;
    std::cout << "added " << add << std::endl;
}

int Span::shortestSpan(void) const {
    if (this->_count <= 1)
        throw std::exception();
    if (this->_set->size() < 2)
        return 0;
    int min = INT_MAX;
    int prev;
    for(std::set<int>::iterator begin = this->_set->begin();
            begin != this->_set->end(); begin++) {
        if (begin != this->_set->begin()) {
            min = *begin - prev < min ? *begin - prev : min;
        }
        prev = *begin;
    }
    return min;
}

int Span::longestSpan(void) const {
    if (this->_count <= 1)
        throw std::exception();
    std::set<int>::iterator begin = this->_set->begin();
    std::set<int>::iterator end = this->_set->end();
    --end;
    return *(end) - *begin;
}

//getter functions
unsigned int Span::getMax(void) const {
    return this->_max;
}

unsigned int Span::getCount(void) const {
    return this->_count;
}

std::set<int> * Span::getSet(void) const {
    return this->_set;
}