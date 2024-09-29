/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 10:47:13 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/28 11:47:43 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main (){

    Dataa num ;
    num.num = 8;
    Dataa *on ;
    on = &num ;
    Data value;
    Dataa *check ;
    std::cout << num.num << std::endl;
    value.setData(3);
    uintptr_t serializedValue = Serializer::serialize(on);
    std::cout << serializedValue << std::endl ;
    check =  Serializer::deserialize(serializedValue);
    std::cout << check->num << std::endl;
    (void)serializedValue ;
    return (0);
};