/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:08:02 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/11 20:35:08 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default Frag trap Called" << std::endl ;
    name = "Default" ;
    energy_point = 10 ;
    attack_damage = 10 ;
    hit_points = 5;
}

FragTrap::FragTrap(std::string &name)
{
    this->name = name;
    energy_point = 10;
    attack_damage = 10;
    hit_points = 5;
}

void FragTrap::highFivesGuys()
{
    std::cout << "highFives Guys !" << std::endl;
}

FragTrap::FragTrap(const FragTrap &target)
{
    if (this != &target)
    {
        this->name = target.name;
        this->energy_point = target.energy_point;
        this->attack_damage = target.attack_damage;
        this->hit_points = target.hit_points;
    }
}

FragTrap &FragTrap::operator= (const FragTrap &target)
{
    if (this != &target)
    {
        this->name = target.name;
        this->energy_point = target.energy_point;
        this->attack_damage = target.attack_damage;
        this->hit_points = target.hit_points;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "Frag Destructor Called !" << std::endl;
}