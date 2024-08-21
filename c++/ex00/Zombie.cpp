/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:25:54 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/19 21:12:09 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombi.h"

Zombie::Zombie(std::string _name){
    this->name = _name;
}

void Zombie::announce(void){
    std::cout  << this->name << " :" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(){
    std::cout << this->name << " is destroyed" << std::endl ;
}

