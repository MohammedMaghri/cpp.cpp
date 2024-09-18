/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:56:49 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/18 18:33:05 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

AMateria* MateriaSource::createMateria(std::string const& type){
    for (int i = 0; i < 4; i++){
        if (this->enventory[i] && this->enventory[i]->getType() == type){
            return (this->enventory[i]->clone());
        }
    }
    return (NULL);
};

MateriaSource::MateriaSource(){
    std::cout << "Constructor Is called !" << std::endl ;
};

MateriaSource::MateriaSource(const MateriaSource& target){
    *this = target;
};

MateriaSource& MateriaSource::operator=(const MateriaSource& target){
    for (int i = 0; i < 4; i++){
        delete this->enventory[i];
        if (target.enventory[i])
            this->enventory[i] = target.enventory[i]->clone();
        else
           this->enventory[i] = NULL;

    };
    return (*this);
};

MateriaSource::~MateriaSource(){
    std::cout << "Called !" << std::endl ;
};
void MateriaSource::learnMateria(AMateria *target){
    for (int i = 0; i < 4; i++){
        if (!this->enventory[i]){
            this->enventory[i] = target;
            return ;
        }
    }
};