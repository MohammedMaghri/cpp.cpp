/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:06:38 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/18 18:22:35 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
    for (int i = 0; i < 4; i++){
        this->enventory[i] = NULL ;
    };
};

Character::Character(const Character& target) : name(target.name) {
    *this = target;
};


Character& Character::operator=(const Character& target){
    if (this != &target)
    {
        for (int i = 0; i < 4; i++){
            delete this->enventory[i];
            if (target.enventory[i])
                this->enventory[i] = target.enventory[i]->clone();
            else
                this->enventory[i] = NULL;
        };
    };
    return (*this);
};

Character::~Character(){
    for (int i = 0; i < 4 ; i++){
        if (enventory[i])
            delete enventory[i];
    }
    std::cout << "D Called !" << std::endl;
};


Character::Character(std::string name){
    for (int i = 0; i < 4; i++){
        this->enventory[i] = NULL ;
    };
    this->name = name;
};

void Character::equip(AMateria* target){
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