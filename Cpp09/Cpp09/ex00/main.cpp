/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:08:47 by mmaghri           #+#    #+#             */
/*   Updated: 2024/10/08 16:46:30 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ostream>
#include <string>
#include "BitcoinExchange.hpp"


int main(){
    std::string StoreInaelement ;
    std::string CheckStore ;

    StoreElements Values;
    GetDataBase("data.csv", Values);
    CheckInputData("input.csv", Values);  
    std::map <std::string, double>::iterator it = Values.beging();
    std::map <std::string, double>::iterator itend = Values.theend() ;
    std::deque <std::string>::iterator itis = Values.ElementOrder.begin() ;
    std::deque <std::string>::iterator itsend = Values.ElementOrder.end() ;

    std::cout << std::endl ;
    for (; it != itend ; it++){
        FunctionGetElmenetDates(it->first, ",");
    };
    std::cout << "   " << std::endl ;
    std::cout << "   " << std::endl ;
    for (; itis != itsend; itis++) {
        CheckStore = FunctionGetElmenetDates(*itis, "|");
        for (; it != itend ; it++){
            if (CheckStore.find("Error") == std::string::npos){
                StoreInaelement = FunctionGetElmenetDates(it->first, ",");
                if (CheckStore <= StoreInaelement){
                    
                }
            }
        };
        it = Values.beging();
        itend = Values.theend() ;
        std::cout << std::endl ;
    }
    return (0);
};