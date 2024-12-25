/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:46:51 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/12 11:54:08 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual  public ClapTrap {
    public : 
        void guardGate();
        ScavTrap();
        ScavTrap(std::string &name);
        ScavTrap(const ScavTrap &target);
        ScavTrap& operator= (const ScavTrap &value);
        ~ScavTrap();
};