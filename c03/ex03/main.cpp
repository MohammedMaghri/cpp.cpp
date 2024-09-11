/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:15:41 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/11 11:48:13 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(){
    DiamondTrap a;
    std::cout << a.ClapTrap::GetName() << std::endl;
    a.whoami();
    a.attack(a.GetName());
    return (0);
}