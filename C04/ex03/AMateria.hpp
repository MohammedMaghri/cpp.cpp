/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:31:42 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/18 15:16:26 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter ;

class AMateria {
    protected :
        std::string type;
    public :
        AMateria();
        AMateria(const AMateria& target);
        AMateria(std::string const &type);
        AMateria& operator= (const AMateria& target);
        virtual ~AMateria();
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
};