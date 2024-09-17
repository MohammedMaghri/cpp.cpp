/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 21:28:50 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/17 21:24:03 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : matrais("cure") {
};

Cure::Cure(const Cure& matrais){
    *this = matrais;
};

Cure& Cure::operator=(const Cure& matrais){
    if (this != &matrais){
        this->type = matrais.type;
    }
    return (*this);
};

Cure::~Cure(){
    std::cout << "Destructor Called !" << std::endl; 
};

matrais* Cure::clone() const{
    return (new Cure(*this));
};

void Cure::use(ICharacter &traget){
    std::cout << "* heals " << traget.getName() << "\'s wounds *" << std::endl;
};