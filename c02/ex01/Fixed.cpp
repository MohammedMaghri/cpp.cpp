/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:26:10 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/01 22:28:46 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    this->store = 0;
    std::cout << "Default Constructor " << std::endl;
 };

Fixed& Fixed::operator=(const Fixed &copy) {
    (void)copy;
    std::cout << "Copy Assignment Operator Is called " << std::endl ;
    this->store = copy.getRawBits();
    return (*this);
};

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy Assignment Operator " << std::endl ;
    *this = copy ; 
};

void Fixed::getValue(){
    std::cout << this->store << std::endl ;
};

Fixed::~Fixed() {
    std::cout << " Destructor Called .." << std::endl ;
};
int Fixed::getRawBits(void) const {
    std::cout << "getRaWBits" << std::endl ;
    return (this->store);
};

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits" << std::endl ;
    this->store = raw ;
};

Fixed::Fixed(const float number){
    std::cout << "Float Constructo Called " << std::endl;
    int expo = (pow(2, this->fractionali_bit));
    this->store = roundf(number * expo) ;
};

Fixed::Fixed(const int number){
    std::cout << "Int constructor called" << std::endl ;
    int expo = (pow(2, this->fractionali_bit));
    this->store = roundf(number * expo);
};

float Fixed::toFloat(void) const {
    int expo = (pow(2, this->fractionali_bit));
    float value = (float)this->store / (float)expo ;
    return (value);
}

int Fixed::toInt(void) const {
    std::cout << "As Int" << std::endl ;
    int expo = (pow(2, this->fractionali_bit));
    int value = this->store / expo;
    return (value);
};

std::ostream& operator<<(std::ostream& os, const Fixed &value) {
    os << value.toFloat();
    return os;
}