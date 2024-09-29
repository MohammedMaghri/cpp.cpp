/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 10:43:05 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/29 13:28:05 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Dataa *ptr){
    uintptr_t value = reinterpret_cast<uintptr_t>(ptr) ;
    return (value);
};

Dataa* Serializer::deserialize(uintptr_t raw){
    return (reinterpret_cast<Dataa *>(raw));
};

Serializer::Serializer(){
    std::cout << "Constructure Called" << std::endl;
};

Serializer::Serializer(const Serializer& value){
    (void)value ;
};

Serializer& Serializer::operator=(Serializer&  value){
    (void)value ;
    return (value);
};

Serializer::~Serializer(){
    std::cout << "Destructor Called !" << std::endl;
};