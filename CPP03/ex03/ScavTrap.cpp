/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:46:34 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/12 11:02:46 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default Scav trap Called" << std::endl ;
    name = "Default" ;
    energy_point = 10 ;
    attack_damage = 10 ;
    hit_points = 5;
};

ScavTrap::ScavTrap(std::string &name){
    this->name = name;
    energy_point = 10 ;
    attack_damage = 10 ;
    hit_points = 5;
};

void ScavTrap::guardGate(){
    std::cout << "The ScavTrap Is Now On Keeper Mode !" << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap &target){
    if (this != &target)
    {
        this->name = target.name;
        this->energy_point = target.energy_point;
        this->attack_damage = target.attack_damage;
        this->hit_points = target.hit_points;
    }
};

ScavTrap &ScavTrap::operator= (const ScavTrap &target){
    if (this != &target){
        this->name = target.name;
        this->energy_point = target.energy_point;
        this->attack_damage = target.attack_damage;
        this->hit_points = target.hit_points;
    }
    return (*this);
};

ScavTrap::~ScavTrap(){
    std::cout << "Scav Destructor Called !" << std::endl ;
};