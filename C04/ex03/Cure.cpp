/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 21:28:50 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/18 15:16:36 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
};

Cure::Cure(const Cure& AMateria){
    *this = AMateria;
};

Cure& Cure::operator=(const Cure& AMateria){
    if (this != &AMateria){
        this->type = AMateria.type;
    }
    return (*this);
};

Cure::~Cure(){
    std::cout << "Destructor Called !" << std::endl; 
};

AMateria* Cure::clone() const{
    return (new Cure(*this));
};

void Cure::use(ICharacter &traget){
    std::cout << "* heals " << traget.getName() << "\'s wounds *" << std::endl;
};