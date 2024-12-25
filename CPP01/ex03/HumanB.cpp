/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:53:41 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/25 18:43:25 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : weapon(NULL){
    this->_name = name ;
};

void HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon ;
};
void HumanB::attack()
{
    if (weapon == NULL){
        std::cerr << "Undefined Weapon consider using setWeapon() before using attack()" << std::endl;
        return ;
    }
    std::cout << this->_name << " attacks with his " << this->weapon->gettype() << std::endl;
}