/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:34:51 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/20 11:43:43 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "weapon.hpp"
#include <iostream>

class HumanA
{
    private:
        const std::string _name;
        Weapon &weapon;

    public:
      HumanA(std::string thisname, Weapon &weapon) ;
      void attack();
};

#endif