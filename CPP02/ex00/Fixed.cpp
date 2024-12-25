/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:10:40 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/04 16:48:30 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    this->store = 0;
    std::cout << "Default Constructor " << std::endl;
};

Fixed& Fixed::operator=(const Fixed &copy) {
    std::cout << "Copy Assignment Operator Is called " << std::endl ;
    this->store = copy.getRawBits();
    return (*this);
};

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy Assignment Operator " << std::endl ;
    *this = copy ; 
};

Fixed::~Fixed() {
    std::cout << "Destructor Called .." << std::endl ;
};

int Fixed::getRawBits(void) const {
    std::cout << "getRaWBits" << std::endl ;
    return (this->store);
};

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits" << std::endl ;
    this->store = raw ;
};
