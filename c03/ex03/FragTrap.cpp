/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:16:02 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/11 18:33:47 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default Frag trap Called" << std::endl ;
    name = "Default" ;

    /// emmmmm 
    energy_point = 10 ;
    attack_damage = 10 ;
    hit_points = 5;
};

FragTrap::FragTrap(std::string &name) {
    this->name = name;
    // emmmmmmmm 
    energy_point = 10 ;
    attack_damage = 10 ;
    hit_points = 5;
};

void FragTrap::highFivesGuys(){
    std::cout << "highFives Guys !" << std::endl;
};

FragTrap::FragTrap(const FragTrap &target){
    if (this != &target)
    {
        this->name = target.name;
        this->energy_point = target.energy_point;
        this->attack_damage = target.attack_damage;
        this->hit_points = target.hit_points;
    }
};

FragTrap &FragTrap::operator= (const FragTrap &target){
    if (this != &target){
        this->name = target.name;
        this->energy_point = target.energy_point;
        this->attack_damage = target.attack_damage;
        this->hit_points = target.hit_points;
    }
    return (*this);
};

FragTrap::~FragTrap(){
    std::cout << "Destructor Called !" << std::endl ;
};