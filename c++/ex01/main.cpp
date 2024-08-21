/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:35:18 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/18 17:57:59 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.h"

int main (){
    int value = 5;
    Zombie *thiszomb = zombieHorde(value, "Wili");

    for (int i = 0; i < value; i++)
        thiszomb[i].announce();
    return (0);
}