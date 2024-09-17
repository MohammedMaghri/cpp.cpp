/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:10:24 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/17 16:10:54 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "matrais.hpp"
#include "ICharacter.hpp"

class ICharacter ; 
class Ice : public matrais {
    public :
        Ice();
        Ice(const Ice& matrais);
        Ice& operator=(const Ice& matrais);
        virtual ~Ice();
        matrais* clone() const;
        void use(ICharacter &target);
};