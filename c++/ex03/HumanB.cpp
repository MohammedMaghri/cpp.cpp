/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:53:41 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/20 11:59:02 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->name = name ;
}

void HumanB::setWeapon(weapon &weapon){
    this->weapon = &weapon ;
}
void attack()
{
    std::cout << this->name << "attacks with his " << this->weapon.gettype() << std::endl;
}