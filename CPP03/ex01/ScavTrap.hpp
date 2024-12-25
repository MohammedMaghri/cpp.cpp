/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:45:22 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/11 18:50:14 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public :
        void attack(const std::string &target);
        void guardGate();
        ScavTrap();
        ScavTrap(std::string &name);
        ScavTrap(const ScavTrap &target);
        ScavTrap &operator= (const ScavTrap &value);
        ~ScavTrap();
};