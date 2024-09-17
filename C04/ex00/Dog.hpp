/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:39:11 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/14 12:22:36 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "Animal.hpp"

class Dog : public Animal 
{
    public :
        Dog();
        Dog(const Dog& target);
        Dog& operator=(const Dog &value);
        ~Dog();
        void makeSound(void) const;
};