/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:34:16 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/26 10:45:25 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_Weapon) : _name(_name),  weapon(_Weapon) {};
void HumanA::attack(void){
    std::cout << this->_name << " attack with his " << this->weapon.gettype() << std::endl;
};