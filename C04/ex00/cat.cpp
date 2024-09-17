/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:50:20 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/14 12:23:37 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "Constructor Cat Called"  << std::endl;
};

Cat::Cat(const Cat & target) : Animal(target) {}

Cat& Cat::operator=(const Cat &value){
    if (this != &value){
        type = "Cat";
    };
    return (*this);
};

Cat::~Cat(){
    std::cout << "Destructor cat  Called !" << std::endl ;
};

void Cat::makeSound() const {
    std::cout << "Meow" << std::endl;
};
