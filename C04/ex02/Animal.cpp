/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:08:32 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/15 15:24:10 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Default Animal !"){
    std::cout << "Animal Constructure Called ! " << std::endl ;
};

Animal::Animal(const std::string &name){
    std::cout << "Paramitryzed Constructure Called ! " << std::endl ;
    this->type = name;
}

std::ostream& operator<<(std::ostream& os, const Animal& target){
    os << target.getType();
    return (os);
};

Animal::Animal(const Animal& target){
    *this = target;
};

Animal& Animal::operator=(const Animal& target){
    if (this != &target){
        this->type = target.type ;
    };
    return (*this);
};

Animal::~Animal(){
    std::cout << "Animal Destructor Called !" << std::endl;
};

std::string Animal::getType() const {
    std::cout << type << std::endl ;
    return type;
}
