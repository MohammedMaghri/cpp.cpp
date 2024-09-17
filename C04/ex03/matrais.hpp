/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrais.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:31:42 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/17 16:17:39 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter ;

class matrais {
    protected :
        std::string type;
    public :
        matrais();
        matrais(const matrais& target);
        matrais(std::string const &type);
        matrais& operator= (const matrais& target);
        virtual ~matrais();
        std::string const & getType() const;
        virtual matrais* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
};