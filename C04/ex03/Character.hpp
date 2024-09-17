/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:06:50 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/17 12:31:26 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "matrais.hpp"
#include "ICharacter.hpp"

class matrais;
class ICharacter ;

class Character : public ICharacter {
    protected :
        std::string name;
        matrais*    enventory[4];
    public  :
        Character();
        Character(std::string name);
        std::string const& getName() const;
        Character(const Character& target);
        Character& operator=(const Character& target);
        ~Character();
        void equip(matrais* target);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};