/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:55:34 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/11 18:42:55 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap A("Bin");
    ClapTrap B("Tom");

    ClapTrap c(A);
    c = A ;
    A.attack(B.GetName());
    B.takeDamage(5);
    std::cout << B.GetHit() << std::endl;
    B.takeDamage(5);
    std::cout << B.GetHit() << std::endl;
    B.beRepaired(-50);
    B.takeDamage(A.Getattack());
    std::cout << B.GetHit() << std::endl;
    return (0);
};