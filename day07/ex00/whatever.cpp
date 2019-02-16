/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 19:33:00 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/30 19:51:45 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<typename T>
void swap(T & a, T & b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template<typename T>
T const & min(T const & a, T const & b) {
    return (a >= b ? b : a);
}

template<typename T>
T const & max(T const & a, T const & b) {
    return (a <= b ? b : a);
}


int main( void ) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    float e = 2.5;
    float f = 4.5;
    ::swap( e, f );
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f) = " << ::min( e, f ) << std::endl;
    std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
    return 0;
}
