/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:41:19 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/17 21:20:38 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog") {
    ideas = new Brain();
    std::cout << "Constructor Dog Called"  << std::endl;
};

Dog::Dog(const Dog& target) : Animal(target) {}

Dog& Dog::operator=(const Dog &value){
    if (this != &value){
        delete this->ideas ;
        this->ideas = new Brain(*value.ideas);
        type = value.getType();
    };
    return (*this);
};

Dog::~Dog(){
    delete this->ideas ;
    std::cout << "Destructor Dog Called !" << std::endl ;
};

void Dog::makeSound() const{
    std::cout << "Wouf Wouf" << std::endl;
};