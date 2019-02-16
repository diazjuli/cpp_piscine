/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 21:58:43 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/30 21:58:44 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>

template <typename T = int>
class Array {
public:
    //constructors
    Array(void) : _arr(NULL), _size(0) { return;};
    
    Array(unsigned int n) : _arr(n == 0 ? NULL: new T[n]) , _size(static_cast<size_t>(n))
        { return;};

    Array(Array const & src) {
        *this = src;
        return;
    };
    ~Array(void) {return;};

    //operator overloads
    Array & operator=(Array const & rhs) {
        this->_size = rhs.size();
        for (size_t i = 0; i < this->_size; i++) {
            this->_arr[i] = rhs[i];
        }
        return *this;
    };

    T & operator[](size_t index) const {
        if (index < 0 || index >= _size)
            throw std::exception();
        return this->_arr[index];
    };

    size_t size(void) const {return this->_size;};

private:
    T       *_arr;
    size_t _size;
};

#endif