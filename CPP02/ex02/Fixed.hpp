/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:18:17 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/04 15:10:11 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cmath>

class Fixed {
    private :
        int store;
        static const int fractionali_bit = 8;
    public :
        Fixed();
        Fixed(const int number);
        Fixed(const float number);
        Fixed& operator=(const Fixed &copy);
        Fixed(const Fixed &copy);
        void getValue();
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed operator+ (const Fixed &value) const;
        Fixed operator- (const Fixed &value) const;
        Fixed operator/ (const Fixed &value) const;
        Fixed operator* (const Fixed &value) const;
        bool operator< (const Fixed &value)  const;
        bool operator> (const Fixed &value)  const;
        bool operator<= (const Fixed &value) const;
        bool operator>= (const Fixed &value) const;
        Fixed operator++ (int);
        Fixed operator++ ();
        Fixed operator-- (int);
        Fixed operator-- ();
        static Fixed max(const Fixed &value, const Fixed &other);
        static Fixed min(const Fixed &value, const Fixed &other);
        static Fixed min(Fixed &value, Fixed &other);
        static Fixed max(Fixed &value, Fixed &other);
};
std::ostream& operator<<(std::ostream& os, const Fixed &value);

