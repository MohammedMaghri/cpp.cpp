/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:25:57 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/11 20:51:34 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
    std::cout <<  "Default Constructure Is called !" << std::endl ;
    name = "Trucrtor";
    ClapTrap::name = name + "_clap_name";
    this->attack_damage = 100;
    this->energy_point = 50;
    this->hit_points = 10;
};

DiamondTrap::DiamondTrap(const std::string &name) {
    std::cout << "Name Constructure Is called !" << std::endl ;
    this->name = name ;
    ClapTrap::name = name + "_clap_name";
    this->hit_points = FragTrap::hit_points ;
    this->energy_point = ClapTrap::energy_point;
    this->attack_damage = FragTrap::attack_damage;  
};

DiamondTrap::DiamondTrap(const DiamondTrap &trap){
    if (this != &trap){
        this->attack_damage = trap.attack_damage;
        this->energy_point = trap.energy_point;
        this->hit_points = trap.hit_points;
        this->name = trap.name; 
    }
};

void DiamondTrap::attack(const std::string &value){
    ScavTrap::attack(value);
};

DiamondTrap::~DiamondTrap(){
    std::cout << " Diamond Trap Is called " << std::endl ;
};

DiamondTrap& DiamondTrap::operator= (const DiamondTrap &value){
    
    if (this != &value){
        this->name = value.name ;
        this->energy_point = value.energy_point;
        this->attack_damage = value.attack_damage;
        this->hit_points = value.hit_points;
    }
    return (*this);
};
void DiamondTrap::whoami(void){
    std::cout << "Diamomd Trap Name -> " << this->name <<  "  |-> " << ClapTrap::GetName() << std::endl;
};