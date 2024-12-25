/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:53:14 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/26 11:20:02 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

void Harl::debug(void){
    std::cout << "DEBUG" << std::endl ;
}

void Harl::info(void){
    std::cout << "INFO" << std::endl ;
}
void Harl::warning(void){
    std::cout << "WARNING" << std::endl ;
}
void Harl::error(void){
    std::cout << "ERROR" << std::endl ;
}

void  Harl::complain(std::string level){
    int value ;
    (void)level;

    level == "DEBUG" ?  value = 1 :
    level == "INFO" ?  value = 2 :
    level == "WARNING" ?  value = 3 :
    level == "ERROR" ?  value = 4 :
    value = 0;

    void (Harl::*funcPtr)() ;
    switch (value){

        case 1 : {
            funcPtr = &Harl::debug;
            (this->*funcPtr)();
            break ;
        }
        case 2 : {
            funcPtr = &Harl::info;
            (this->*funcPtr)();
            break ;
        }
        case 3 : {
            funcPtr = &Harl::warning;
            (this->*funcPtr)();
            break ;
        }
        case 4 : {
            funcPtr = &Harl::error;
            (this->*funcPtr)();
            break ;
        }
        default: std::cout << "Invalid" << std::endl;
    }
}
