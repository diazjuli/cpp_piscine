/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 11:22:38 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/24 11:29:51 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {
	
	public:
		
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const src);
		Fixed(float const src);
		~Fixed(void);
		Fixed & operator=(Fixed const & rhs);
		bool operator>(Fixed const & rhs) const;
		bool operator<(Fixed const & rhs) const;
		bool operator>=(Fixed const & rhs) const;
		bool operator<=(Fixed const & rhs) const ;
		bool operator==(Fixed const & rhs) const;
		bool operator!=(Fixed const & rhs) const;
		Fixed operator+(Fixed const & rhs) const;
		Fixed operator-(Fixed const & rhs) const;
		Fixed operator*(Fixed const & rhs) const;
		Fixed operator/(Fixed const & rhs) const;
		Fixed & operator++(void);
		Fixed & operator++(int num);
		Fixed & operator--(void);
		Fixed & operator--(int num);
		static Fixed & min(Fixed &a, Fixed &b);
		static Fixed & max(Fixed &a, Fixed &b);
		static const Fixed & min(const Fixed &a, const Fixed &b);
		static const Fixed & max(const Fixed &a, const Fixed &b);
		
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:

		int _value;
		static const int _fractional;

};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
