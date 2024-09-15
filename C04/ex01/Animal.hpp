/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:08:35 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/15 15:13:45 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
#include <iostream> 

class Animal {
    protected :
        std::string type;
    public :
        Animal();
        Animal(const std::string &name);
        Animal(const Animal& target);
        Animal& operator=(const Animal& target);
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const;
};

std::ostream& operator<<(std::ostream& os, const Animal& traget);
