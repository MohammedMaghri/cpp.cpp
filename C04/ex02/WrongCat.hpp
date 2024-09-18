/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:05:01 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/15 15:09:55 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    private :
        std::string type;
    public :
        WrongCat();
        WrongCat(const WrongCat& target);
        WrongCat& operator=(const WrongCat &value);
        ~WrongCat();
        void makeSound(void) const;
        std::string getType() const;
};