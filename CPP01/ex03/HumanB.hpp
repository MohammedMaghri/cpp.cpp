/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:54:03 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/25 16:41:47 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP 

#include <iostream>
#include "weapon.hpp"

class HumanB 
{
    private :
        std::string _name;
        Weapon *weapon ;
    public :
        HumanB(std::string _name);
        void setWeapon(Weapon &weapon);
        void attack();
};

#endif