/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:43:05 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/17 21:22:47 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrais.hpp"
#include "Ice.hpp"


Ice::Ice() : matrais("ice"){
};

Ice::Ice(const Ice& matrais){
    *this = matrais;
};

Ice& Ice::operator=(const Ice& matrais){
    if (this != &matrais){
        this->type = matrais.type;
    }
    return (*this);
};

Ice::~Ice(){
    std::cout << "Destructor Called !" << std::endl; 
};

matrais* Ice::clone() const {
    return (new Ice(*this));
};

void Ice::use(ICharacter &traget){
    (void)traget ;
    std::cout << "* shoots an ice bolt at " <<  traget.getName() << " *" << std::endl;
};