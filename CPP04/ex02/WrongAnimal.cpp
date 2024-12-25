/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:07:55 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/15 15:08:16 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "Constructor Is Called !" << std::endl;
};

WrongAnimal::WrongAnimal(const std::string &name){
    type = name ;
};

WrongAnimal::WrongAnimal(const WrongAnimal &target){
    *this = target ;
};

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& target){
    if (this != &target){
        this->type = target.type ;
    }
    return (*this);
};

WrongAnimal::~WrongAnimal (){
    std::cout << "Destructor Is Called !" << std::endl ;
};

void WrongAnimal::makeSound() const{
    std::cout << type << std::endl ;
};

std::string WrongAnimal::getType() const{
    return (type);
};