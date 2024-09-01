/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:09:37 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/01 14:24:38 by mmaghri          ###   ########.fr       */
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
        Fixed& operator=(const Fixed &copy);
        Fixed(const Fixed &copy);
        void setRawBits( int const raw );
        int getRawBits( void ) const;
        ~Fixed();
};
