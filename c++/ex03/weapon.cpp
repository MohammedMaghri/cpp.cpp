/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:00:58 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/20 12:02:18 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "weapon.hpp"

const std::string &Weapon::gettype(){
    const std::string &refrence = this->type;
    return (refrence);
}

void Weapon::setType(std::string type){
    this->type = type;
}
Weapon::Weapon(std::string type){
    setType(type);
}