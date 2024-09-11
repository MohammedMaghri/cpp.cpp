/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:16:04 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/11 20:40:16 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    public : 
        void highFivesGuys();
        FragTrap();
        FragTrap(std::string &name);
        FragTrap(const FragTrap &target);
        FragTrap &operator= (const FragTrap &value);
        ~FragTrap();
};