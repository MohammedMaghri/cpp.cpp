/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:55:56 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/18 17:57:09 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.h"

Zombie* zombieHorde( int N, std::string name ){
    Zombie *obj = new Zombie[N];

    for (int i = 0 ; i < N ; i++){
        obj[i].setName(name);
    }
    return obj;
}

void Zombie::announce(void){
    std::cout << "<" << this->name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name){
    this->name = name ;
}
