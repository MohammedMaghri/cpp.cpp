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
    std::string endOfVALUE = returnWithoutSpaces(values.substr(holdstart + 1));
    endOfVALUE = endOfVALUE.substr(endOfVALUE.find_first_not_of(" \t\n"), endOfVALUE.find_last_not_of(" \t\n") + 1);
    end-- ;
    if (end->first <= startOfVALUE){
        std::cout << startOfVALUE << " => " << endOfVALUE << " " << (atof(endOfVALUE.c_str()) * end->second) << std::endl;
        return ;
    }
    for (; start != end; start++){
        if (start->first >= startOfVALUE){
            std::cout << startOfVALUE << " => " << endOfVALUE << " " << (atof(endOfVALUE.c_str()) * start->second) << std::endl;
            break ;
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
        if (ParsDays(startIterating->first).find("Error") == std::string::npos)
            functionCheckWithExactDates(startIterating->first, Values);
        else {
            std::cout << ParsDays(startIterating->first) << std::endl ;
        }
    };
    return (0);
};