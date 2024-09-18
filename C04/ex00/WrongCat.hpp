/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 12:34:16 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/15 12:57:13 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
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