/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:10:24 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/15 20:42:37 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrais.hpp"


class Ice : public matrais {
    Ice();
    Ice(const Ice& matrais);
    Ice& operator=(const Ice& matrais);
    ~Ice();
    matrais* clone() const;
};