/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 21:22:00 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/20 11:46:43 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string thisname, Weapon &weapon) : _name(thisname), weapon(weapon)
{

}


void  HumanA::attack()
{
    std::cout << this->_name << " attacks with his " << this->weapon.gettype() << std::endl;
}