/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:06:50 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/18 15:18:51 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class AMateria;
class ICharacter ;

class Character : public ICharacter {
    protected :
        std::string name;
        AMateria*    enventory[4];
    public  :
        Character();
        Character(std::string name);
        std::string const& getName() const;
        Character(const Character& target);
        Character& operator=(const Character& target);
        ~Character();
        void equip(AMateria* target);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};