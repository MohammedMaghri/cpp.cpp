/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:26:12 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/01 14:51:27 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
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
};

std::ostream& operator<<(std::ostream& os, const Fixed &value) ;