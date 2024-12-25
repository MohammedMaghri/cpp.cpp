/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:35:18 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/27 21:21:19 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main (){
    int value = 5;
    Zombie *thiszomb = zombieHorde(value, "bo");

    for (int i = 0; i < value; i++)
        thiszomb[i].announce();
    delete [] thiszomb;
    return (0);
}