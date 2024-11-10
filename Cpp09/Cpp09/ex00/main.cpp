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

std::string returnWithoutSpaces(std::string value) {
    int start = value.find_first_not_of(" \t\n");
    int end   = value.find_last_not_of(" \t\n");
    return (value.substr(start, end));
};

void functionCheckWithExactDates (std::string values, StoreElements Data) {
    if (values.find("Error") != std::string::npos) return ;
    int holdstart = values.find("|");
    std::map<std::string, double>::iterator start = Data.beging();
    std::map<std::string, double>::iterator end = Data.theend();
    std::string startOfVALUE = returnWithoutSpaces(values.substr(0, holdstart + 1));
    startOfVALUE = startOfVALUE.substr(startOfVALUE.find_first_not_of(" \t\n"), startOfVALUE.find_last_not_of(" \t\n") + 1);
    std::string endOfVALUE   = returnWithoutSpaces(values.substr(holdstart));
    end-- ;
    if (end->first <= startOfVALUE){
        std::cout << startOfVALUE << " ->" << " ( " << end->first << " ) "<< std::endl ;
        return ;
    }
    for (; start != end; start++){
        if (start->first >= startOfVALUE){
            std::cout << startOfVALUE << " ==> "<< start->first << std::endl;
            std::cout << std::endl ;
        }
    };
};

int main(){
    std::string StoreInaelement ;
    std::string CheckStore ;
    StoreElements Values;
    GetDataBase("data.csv", Values);
    CheckInputData("input.csv", Values);
    std::map<std::string, int>::iterator startIterating = Values.postionStart();
    std::map<std::string, int>::iterator endIterating = Values.positionEnd();
    for (; startIterating != endIterating; startIterating++){
        functionCheckWithExactDates(startIterating->first, Values);
    };
    // for (; itis != itsend; itis++) {
    //     CheckStore = FunctionGetElmenetDates(*itis, "|");
    //     std::cout << *itis << std::endl ;
    //     it = Values.beging();
    //     itend = Values.theend() ;
    //     for (; it != itend ; it++){
    //         if (CheckStore.find("Error") == std::string::npos){
    //             StoreInaelement = FunctionGetElmenetDates(it->first, ",");
    //             if (CheckStore > endthis->first){
    //                 std::cout << CheckStore << " Exact date "  << endthis->first << " ";
    //                 std::cout << endthis->second << std::endl ;
    //                 break;
    //             }
    //             if (startthis->first > CheckStore) {
    //                 std::cout << "No Existing Dates " << *itis  ;
    //                 break ;
    //             }
    //             else if (CheckStore <= StoreInaelement){
    //                 if (it != Values.beging() && CheckStore != StoreInaelement) {
    //                     it--; flag = 1; std::cout << " |" << it->first << "| " << std::endl;
    //                     std::cout << "Price Was this Much -> " << it->second << std::endl ;
    //                 }
    //                 else {
    //                     flag = 1 ; 
    //                     std::cout << it->first <<  " => " ;
    //                     std::cout << it->second << " = "  << std::endl ;
    //                 }
    //                 break ;
    //             }
    //         }
    //         else {
    //             std::cout << *itis << std::endl ;
    //             break ;
    //         }
    //         flag = 0 ;
    //     };
    //     std::cout << std::endl ;
    // }
    return (0);
};