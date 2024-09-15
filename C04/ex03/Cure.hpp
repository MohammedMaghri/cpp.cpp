/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 21:29:08 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/15 21:30:55 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrais.hpp"

class Cure : public matrais {
    Cure();
    Cure(const Cure& matrais);
    Cure& operator=(const Cure& matrais);
    ~Cure();
    matrais* clone() const;
};