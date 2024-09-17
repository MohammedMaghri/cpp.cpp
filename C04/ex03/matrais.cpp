/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrais.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:28:45 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/17 16:01:41 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrais.hpp"

matrais::matrais(){
}

matrais::matrais(const matrais& target){
    *this = target ;
};

matrais& matrais::operator= (const matrais& target){
    if (this != &target){
        this->type = target.type;
    };
    return (*this);
};

matrais::~matrais(){
    std::cout << "Destructor Called !" << std::endl ;
};

std::string const &matrais::getType() const {
    return (this->type);
};

matrais::matrais(std::string const &type){
    this->type = type ;
};