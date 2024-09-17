/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:39:11 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/15 15:25:13 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal 
{
    private:
        Brain *ideas ;
    public :
        Dog();
        Dog(const Dog& target);
        Dog& operator=(const Dog &value);
        ~Dog();
        void makeSound() const; 
};