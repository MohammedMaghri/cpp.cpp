/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:43:05 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/18 15:17:47 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"


Ice::Ice() : AMateria("ice"){
};

Ice::Ice(const Ice& AMateria){
    *this = AMateria;
};

Ice& Ice::operator=(const Ice& AMateria){
    if (this != &AMateria){
        this->type = AMateria.type;
    }
    return (*this);
};

Ice::~Ice(){
    std::cout << "Destructor Called !" << std::endl; 
};

AMateria* Ice::clone() const {
    return (new Ice(*this));
};

void Ice::use(ICharacter &traget){
    (void)traget ;
    std::cout << "* shoots an ice bolt at " <<  traget.getName() << " *" << std::endl;
};