/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:10:04 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/12 11:49:58 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public : 
        FragTrap();
        FragTrap(std::string &name);
        FragTrap(const FragTrap &target);
        FragTrap &operator= (const FragTrap &value);
        ~FragTrap();
        void highFivesGuys();
};