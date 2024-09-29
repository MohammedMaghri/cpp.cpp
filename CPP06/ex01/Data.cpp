/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 10:26:53 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/28 10:42:07 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Data.hpp"

Data::Data() : valid_dataa(0){
    std::cout << "Constructor is called !" << std::endl ;
};

int Data::getData(){
    return (valid_dataa);
};

Data::Data(const Data& value){
    *this = value ; 
};

Data& Data::operator=(const Data& value){
    valid_dataa = value.valid_dataa ;
    return (*this);
};

Data::~Data(){
    std::cout << "Destructor Called !" << std::endl ;
};

void Data::setData(int value){
    valid_dataa = value ;
};