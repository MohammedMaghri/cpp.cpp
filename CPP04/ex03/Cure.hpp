/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 21:29:08 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/18 15:16:44 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

class ICharacter ;
class Cure : public AMateria {
    public :
        Cure();
        Cure(const Cure& AMateria);
        Cure& operator=(const Cure& AMateria);
        virtual  ~Cure();
        AMateria* clone() const;
        void use(ICharacter& target);
};