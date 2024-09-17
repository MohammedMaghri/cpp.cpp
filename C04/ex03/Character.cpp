/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:06:38 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/17 21:26:47 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
    for (int i = 0; i < 4; i++){
        this->enventory[i] = NULL ;
    };
};

Character::Character(const Character& target){
    for (int i = 0; i < 4; i++){
        if (target.enventory[i])
            this->enventory[i] = target.enventory[i]->clone();
        else
            this->enventory[i] = NULL;
    }
    this->name = target.name ;
};

Character::~Character(){
    std::cout << "D Called !" << std::endl;
};
Character& Character::operator=(const Character& target){
    if (this != &target){
        for (int i = 0; i < 4; i++){
            this->enventory[i] = target.enventory[i];
        };
        *this = target;
    };
    return (*this);
};

Character::Character(std::string name){
    for (int i = 0; i < 4; i++){
        this->enventory[i] = NULL ;
    };
    this->name = name;
};

void Character::equip(matrais* target){
    for (int i = 0;i < 4;i++){
        if (this->enventory[i] == NULL){
            this->enventory[i] = target;
            break;
        }
    }
};

void Character::unequip(int idx){
    if (idx >= 0 && idx <= 3)
        this->enventory[idx] = NULL;
};

void Character::use(int idx, ICharacter& target){
   if (idx >= 0 && idx < 4 && this->enventory[idx] != NULL){
        this->enventory[idx]->use(target);
   }
};

std::string const & Character::getName() const{
    return (this->name);
};