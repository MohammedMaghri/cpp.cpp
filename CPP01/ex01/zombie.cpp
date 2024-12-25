/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:55:56 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/28 10:00:32 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::~Zombie(){
   std::cout << this->name << " Destroyed" << std::endl;
};

Zombie::Zombie(){};

Zombie* zombieHorde( int N, std::string name ){
    if (N < 1){
        std::cerr << "invalid :" << N << " number of zombies to allocate" << std::endl;
        return NULL;
    }
    Zombie *obj = new Zombie[N];

    for (int i = 0 ; i < N ; i++){
        obj[i].setName(name);
    }
    return obj;
}

void Zombie::announce(void){
    std::cout << " " << this->name << "  BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name){
    this->name = name ;
}
