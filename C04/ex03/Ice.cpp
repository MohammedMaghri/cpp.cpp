/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:43:05 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/15 21:05:23 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrais.hpp"
#include "Ice.hpp"


Ice::Ice(){
    std::cout << "Constructor Called !" << std::endl;
};

Ice::Ice(const Ice& matrais){
    *this = matrais;
};

Ice& Ice::operator=(const Ice& matrais){
    *this = matrais;
    return (*this);
};

Ice::~Ice(){
    std::cout << "Destructor Called !" << std::endl; 
};

matrais* Ice::clone() const{
    matrais *value = new Ice();
    return (value);
};