/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:32:37 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/19 21:13:43 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "zombi.h"

void f() {
    system("leaks zombie");
}
int main ()
{
    atexit(f);
    randomChump("Zombie12");
    Zombie *zombie = newZombie("Zombie13");
    zombie->announce();
    delete zombie;
    return 0;
}