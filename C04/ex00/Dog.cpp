/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:42:40 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/14 12:23:59 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "Constructor Dog Called"  << std::endl;
};

Dog::Dog(const Dog& target) : Animal(target) {}

Dog& Dog::operator=(const Dog &value){
    if (this != &value){
        type = "Dog";
    };
    return (*this);
};

Dog::~Dog(){
    std::cout << "Destructor Dog Called !" << std::endl ;
};

void Dog::makeSound() const {
    std::cout << "Wouf Wouf" << std::endl;
};
