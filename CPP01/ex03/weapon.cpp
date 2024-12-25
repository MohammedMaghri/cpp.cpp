/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:46:16 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/25 17:07:02 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "weapon.hpp"
#include "HumanB.hpp"


const std::string &Weapon::gettype(){
    return (this->type) ;
};

void Weapon::setType(std::string type){
    this->type = type ;
}

Weapon::Weapon(std::string string){
    Weapon::setType(string);
}