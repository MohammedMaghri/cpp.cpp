/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:51:34 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/26 22:01:43 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"
#include <iostream>


void Harl::debug(){
    std::cout << "DEBUG" << std::endl ;
}

void Harl::info(){
    std::cout << "INFO" << std::endl;
}

void Harl::warning(){
    std::cout << "WARNING" << std::endl;
}

void Harl::error(){
    std::cout << "ERROR" << std::endl ;
}

int functionCheckOut(std::string level){
    int resValue = 0;
    level == "DEBUG" ? resValue = 1 : 
    level == "INFO" ? resValue = 2 : 
    level == "WARNING"  ? resValue = 3 :
    level == "ERROR" ? resValue = 4 :
    resValue = 0;
    return (resValue);
}

void Harl::complain(std::string level){
    void (Harl::*funcPtr)();
    (void)funcPtr ;
    int value = functionCheckOut(level);

    switch (value)
    {
        case 1 : 
            funcPtr = &Harl::debug;
            (this->*funcPtr)();
        case 2 : 
            funcPtr = &Harl::info;
            (this->*funcPtr)();
        case 3 : 
            funcPtr = &Harl::warning;
            (this->*funcPtr)();
        case 4 : 
            funcPtr = &Harl::error;
            (this->*funcPtr)();
            break ;
        default : std::cout << "Invalid Argument .. !" << std::endl ;
    }
}