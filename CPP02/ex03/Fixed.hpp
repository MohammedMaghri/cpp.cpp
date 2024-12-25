/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:12:00 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/04 15:15:24 by mmaghri          ###   ########.fr       */
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
        Fixed operator++ (int);
        Fixed operator++ ();
        Fixed operator-- (int);
        Fixed operator-- ();
        static Fixed max(const Fixed &value, const Fixed &other);
        static Fixed min(const Fixed &value, const Fixed &other);
        static Fixed max(Fixed &value, Fixed &other);
        static Fixed min(Fixed &value, Fixed &other);
        bool operator>= (const Fixed &value) const;
};
std::ostream& operator<<(std::ostream& os, const Fixed &value);
