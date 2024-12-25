/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:28:45 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/18 15:16:11 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
}

AMateria::AMateria(const AMateria& target){
    *this = target ;
};

AMateria& AMateria::operator= (const AMateria& target){
    if (this != &target){
        this->type = target.type;
    };
    return (*this);
};

AMateria::~AMateria(){
    std::cout << "Destructor Called !" << std::endl ;
};

std::string const &AMateria::getType() const {
    return (this->type);
};

AMateria::AMateria(std::string const &type){
    this->type = type ;
};