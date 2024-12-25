/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:50:51 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/28 09:50:56 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <string>
#include <cstdlib>

class Zombie {
    private :           
        std::string name;
    public :
        Zombie(std::string _name);
        void announce(void);
        ~Zombie();
};


Zombie  *newZombie(std::string name);
void    randomChump(std::string name);