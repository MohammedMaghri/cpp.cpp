/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:56:49 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/18 15:20:07 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

AMateria* MateriaSource::createMateria(std::string const& type){
    for (int i = 0; i < 4; i++){
        if (this->enventory[i]->getType() == type){
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
        this->enventory[i] = target.enventory[i];
    };
    return (*this);
};

MateriaSource::~MateriaSource(){
};
void MateriaSource::learnMateria(AMateria *target){
    for (int i = 0; i < 4; i++){
        if (!this->enventory[i]){
            this->enventory[i] = target;
            return ;
        }
    }
};