/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:10:24 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/18 15:19:23 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class ICharacter ; 
class Ice : public AMateria {
    public :
        Ice();
        Ice(const Ice& matrais);
        Ice& operator=(const Ice& matrais);
        virtual ~Ice();
        AMateria* clone() const;
        void use(ICharacter &target);
};