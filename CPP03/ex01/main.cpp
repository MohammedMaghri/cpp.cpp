/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:45:46 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/12 11:49:17 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ScavTrap.hpp"

int main(){
    ClapTrap a("Pimo");
    std::cout << std::endl;
    std::cout << "Name-> " << a.GetName() << std::endl;
    std::cout << "Energy -> "<< a.GetEnergy() << std::endl;
    std::cout << "Hit ->" << a.GetHit() << std::endl;
    std::cout << "Attack ->" << a.Getattack() << std::endl;

    std::cout << std::endl;
    ScavTrap b;
    std::cout << std::endl;
    b.guardGate();

    std::cout << std::endl;
    b.attack(a.GetName());
    a.takeDamage(3);
    std::cout << a.GetHit() << std::endl;
    a.beRepaired(3);
    std::cout << a.GetHit() << std::endl;
    b.attack(a.GetName());
    a.takeDamage(10);
    std::cout << a.GetHit() << std::endl;

    return (0);
}