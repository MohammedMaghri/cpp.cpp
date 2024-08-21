/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:54:03 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/20 11:59:21 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>
#include "weapon.hpp"

class HumanB 
{
    private :
        std::string _name;
        weapon *weapon ;
    public :
        HumanB(std::string _name);
        void setWeapon(weapon &weapon);
        void attack();
}