/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:32:37 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/27 21:15:22 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "zombie.hpp"

// void f() {
//     system("leaks zombie");
// }

int main ()
{
    randomChump("Zombie12");
    Zombie *zombie = newZombie("Zombie13");
    zombie->announce();
    delete zombie;
    return 0;
}