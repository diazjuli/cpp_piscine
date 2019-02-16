/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 19:40:57 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/31 19:40:58 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <list>
#include <string>
#include <stdexcept>
#include <iostream>
#include <iterator>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:
		//constructors
		MutantStack<T>(void) { return; }

		MutantStack(MutantStack const &r) {
			(void)r;
			return;
		}

		~MutantStack<T>(void) { return; }

        //operator overloads
		MutantStack &operator=(MutantStack const &r) {
			(void)r;
			return;
		}

		typedef typename std::list<T>::iterator iterator;

        //iterators
		iterator begin() { return (_stack.begin());	}

		iterator end() { return (_stack.end());	}

		void push(T value){	_stack.push_front(value); }

		void pop(void) { _stack.pop_front(); }
        
        T & top(void) { return (_stack.front()); }

		T size(void) { return (_stack.size()); }
	
    private:

		std::list<T>		_stack;
};

#endif