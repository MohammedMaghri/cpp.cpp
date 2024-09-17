/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:42:17 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/14 12:22:56 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal {
    public :
        Cat();
        Cat(const Cat& target);
        Cat& operator=(const Cat &value);
        ~Cat();
        void makeSound(void) const;
};