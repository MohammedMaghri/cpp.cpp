/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:42:17 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/14 16:04:57 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private :
        Brain* ideas;
    public :
        Cat();
        Cat(const Cat& target);
        Cat& operator=(const Cat &value);
        ~Cat();
        void makeSound() const;
};