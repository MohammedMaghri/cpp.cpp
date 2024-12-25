/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:15:58 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/11 20:51:12 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string &target){
    std::cout <<  "ClapTrap " << this->name << " attacks " << target << std::endl;
};

ClapTrap::ClapTrap(ClapTrap &value){
     if (this != &value){
        this->name = value.name;
        this->energy_point = value.energy_point;
        this->hit_points = value.hit_points;
        this->attack_damage = value.attack_damage;
    }
};

void ClapTrap::beRepaired(unsigned int amount){
    if ((int)amount < 0){
        std::cout << "No Less or Equal To 0 !" << std::endl ;
        return ;
    }
    if (energy_point >= 1){
        energy_point -= 1;
        this->hit_points += amount;
        std::cout << "It's Being Repaired !" << std::endl;
    }
    else {
        std::cout << "No Enough Hit Point's !" << std::endl;
    }
};


ClapTrap& ClapTrap::operator= (const ClapTrap &target){
    if (this != &target){
        this->name = target.name;
        this->energy_point = target.energy_point;
        this->hit_points = target.hit_points;
        this->attack_damage = target.attack_damage;
    }
    return (*this);
};

void ClapTrap::takeDamage(unsigned int amount){
    if ((int)amount < 0){
        std::cout << "No Less or Equal To 0 !" << std::endl ;
        return ;
    }

    if (amount >= hit_points || hit_points == 0){
        hit_points = 0;
        std::cout << this->name << " Is dead" << std::endl;
    }
    else {
        std::cout << this->name << " Take Damage !" << std::endl;
        hit_points -= amount ;
    }
};


std::string ClapTrap::GetName() const{
    return (this->name);
};

int ClapTrap::GetEnergy() const{
    return (this->energy_point);
}

int ClapTrap::Getattack() const{
    return (this->attack_damage);
};

int ClapTrap::GetHit() const{
    return (this->hit_points);
};

ClapTrap::ClapTrap(std::string name){
    std::cout << "Constructor Is called " << std::endl ;
    this->name = name ;
    energy_point = 10 ;
    hit_points = 10 ;
    attack_damage = 0;
};

ClapTrap::~ClapTrap(){
    std::cout << "Destructor Is called !" << std::endl;
}

ClapTrap::ClapTrap(){
    std::cout << "Default Constructor Is added !" << std::endl ;
    name = "Default";
    energy_point = 10 ;
    hit_points = 10 ;
    attack_damage = 0;
};