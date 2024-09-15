/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 21:28:50 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/15 21:31:39 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(){
    std::cout << "Constructor Called !" << std::endl;
};

Cure::Cure(const Cure& matrais){
    *this = matrais;
};

Cure& Cure::operator=(const Cure& matrais){
    *this = matrais;
    return (*this);
};

Cure::~Cure(){
    std::cout << "Destructor Called !" << std::endl; 
};

matrais* Cure::clone() const{
    matrais *value = new Cure();
    return (value);
};