/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 21:29:08 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/17 16:11:08 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrais.hpp"
#include "ICharacter.hpp"

class ICharacter ;
class Cure : public matrais {
    public :
        Cure();
        Cure(const Cure& matrais);
        Cure& operator=(const Cure& matrais);
        virtual  ~Cure();
        matrais* clone() const;
        void use(ICharacter& target);
};