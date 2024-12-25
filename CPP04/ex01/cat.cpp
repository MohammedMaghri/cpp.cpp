/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:50:20 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/18 13:57:38 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    ideas = new Brain();
    std::cout << "Constructor Cat Called"  << std::endl;
};

Cat::Cat(const Cat & target) : Animal(target) {
    ideas = new Brain();
}

Cat& Cat::operator=(const Cat &value){
    if (this != &value){
        delete this->ideas ;
        this->ideas = new Brain(*value.ideas);
        type = value.getType();
    };
    return (*this);
};

Cat::~Cat(){
    delete ideas;
    std::cout << "Destructor Called !" << std::endl ;
};

void Cat::makeSound() const{
    std::cout << "Meow" << std::endl;
};
