/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 10:24:11 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/29 13:28:09 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdint>
#include "Data.hpp"

class Data ;

class Serializer {
    private: 
        Serializer();
    public :
        Serializer(const Serializer& value);
        ~Serializer();
        Serializer& operator= ( Serializer& value);
        static uintptr_t serialize(Dataa* ptr);
        static Dataa* deserialize(uintptr_t raw);
};