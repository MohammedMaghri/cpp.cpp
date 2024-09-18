/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 11:44:00 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/18 14:22:50 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Animal.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat") {
    std::cout << "Constructor WrongCat Called"  << std::endl;
};

WrongCat::WrongCat(const WrongCat & target) : WrongAnimal(target) {}

WrongCat& WrongCat::operator=(const WrongCat &value){
    if (this != &value){
        this->type = "Cat";
    };
    return (*this);
};

WrongCat::~WrongCat(){
    std::cout << "Destructor cat  Called !" << std::endl ;
};

void WrongCat::makeSound() const {
    std::cout << "Meow" << std::endl;
};
std::string WrongCat::getType() const{
    return (type);
};