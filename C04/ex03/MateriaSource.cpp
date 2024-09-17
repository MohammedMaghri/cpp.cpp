/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:56:49 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/17 15:58:31 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

matrais* MateriaSource::createMateria(std::string const& type){
    for (int i = 0; i < 4; i++){
        if (this->enventory[i]->getType() == type){
            return (this->enventory[i]->clone());
        }
    }
    return (NULL);
};

void MateriaSource::learnMateria(matrais *target){
    for (int i = 0; i < 4; i++){
        if (!this->enventory[i]){
            this->enventory[i] = target;
            return ;
        }
    }
};