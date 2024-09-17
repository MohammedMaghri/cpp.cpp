/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:03:54 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/14 16:15:43 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

Brain::Brain(){
    std::cout <<  "Constructor Brain Called !" << std::endl; 
};

Brain::Brain(const Brain& traget){
    (void)traget ; 
    std::cout << "Pramitryzed Constructor Called !" << std::endl;
};

Brain& Brain::operator=(const Brain& target){ 
    if (this != &target){
        for (int i = 0; i <= 100; i++)
        this->ideas[i] = target.ideas[i];
        *this = target ; 
    }
    return (*this);
};

Brain::~Brain(){
    std::cout << "Destructor Called !" << std::endl ;
};
