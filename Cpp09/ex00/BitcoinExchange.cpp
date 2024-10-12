/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:08:50 by mmaghri           #+#    #+#             */
/*   Updated: 2024/10/12 14:22:18 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void GetDataBase(std::string Filename, StoreElements&  StoreIn){
    std::ifstream infile(Filename);
    (void) StoreIn ;
    std::string value ;
    for ( ; getline(infile, value); ){
        StoreIn.setMap(value.substr(0, value.find(",")),
        atof(value.substr(value.find(",") + 1).c_str()));
    };
    infile.close();
    return ;
};

int checkInput(std::string value, std::string Tocheck){
    if (value == Tocheck) return (1);
    return (-1);
};

int checkIfDigit(std::string value){
    for (size_t i = 0; i < value.length(); i++){
        if (isdigit(value[i]) != 1) return (-1);
    };
    return (1);
};

void ExitMessage(std::string message){
    std::cout << message << std::endl ;
    exit(1);
};

int CheckIsspace(std::string value){
    for (size_t i = 0 ; i < value.length(); i++){
        if (isspace(value[i]) != 1) return (-1);
    };
    return (0);
};

int checkIsnumAndCharacters(std::string value, std::string elems){
    for (size_t i = 0; i < value.length(); i++){
        if (isdigit(value[i]) != 1 && value[i] != elems[0])
            return (-1);
    };
    return (0);
};

int valueCountSerachElement(std::string value, std::string search){
    int flag = 0;
    for (size_t i = 0; i < search.length(); i++){
        if (search[i] == value[0]) flag += 1;
    };
    return (flag);
};

int extractDates(std::string value){
    std::string year ;
    std::string month ;
    std::string day;

    year = value.substr(0, value.find('-'));
    value = value.substr(value.find('-') + 1);
    month = value.substr(0, value.find('-'));
    value = value.substr(value.find('-') + 1);
    day = value ;
    // std::cout << "[" << year << "]" << std::endl ;
    // std::cout << "[" << month << "]" << std::endl ;
    // std::cout << "[" << day << "]" << std::endl ;
    return (0);
};
void splitFirstHalf(std::string FirstHalf){
    int sec = FirstHalf.find_last_not_of(" \t\n");
    int firs = FirstHalf.find_first_not_of(" \t\n");
    FirstHalf = FirstHalf.substr(firs, sec + 1) ;

    if ((valueCountSerachElement(" ", FirstHalf) > 0 || valueCountSerachElement("\t", FirstHalf) > 0
    || valueCountSerachElement("\n", FirstHalf) > 0) && FirstHalf.find("Error") == std::string::npos)
        FirstHalf = ("Error Bad Input => " + FirstHalf);
    else {
        extractDates(FirstHalf);
    }
};

void ParsDays(std::string value){
    std::string firsthalf = value.substr(0, value.find("|"));
    std::string secHalf = value.substr(value.find("|") + 1);\
    try {
        if ((value.find("Error") == std::string::npos) && (isspace(value[value.find("|") - 1]) != 1 || 
        isspace(value[value.find("|") + 1]) != 1 )){
            value = "Error Bad Input => " + value ;
        }
        if (value.find("Error") == std::string::npos && ((isspace(value[value.find("|") - 2])) == 1 || (isspace(value[value.find("|") + 2])))) {
            value = "Error Bad Input => " + value;
        }
        std::cout << "q -> "<< value << std::endl ;
        splitFirstHalf(firsthalf);
    }
    catch (std::out_of_range &e){
        
    }
};

void parsAndCheckData(std::string value, std::deque<std::string> all){
    (void)value ;
    std::deque<std::string>::iterator it = all.begin();
    std::deque<std::string>::iterator itends = all.end();
    for (; it < itends; it++){
        ParsDays(*it);
        std::cout << std::endl ;
    };
};


void CheckInputData(std::string Filename, StoreElements& StoreIn){
    std::ifstream infile(Filename);
    int flag = 0;
    (void)flag;
    std::string Format ;
    (void)StoreIn ;
    for (; getline(infile, Format);){
        if (Format.length() > 1 && CheckIsspace(Format) != 0 && checkIfDigit(Format) == -1 
        && checkInput("date | value", Format) == -1 && flag == 0){
            ExitMessage("Not A valid Format !");
        }
        else if (checkInput("date | value", Format) == 1)
        {flag = 1; std::cout << "Valid Input !" << std::endl;}
        if (flag == 1){
            try {
                if (CheckIsspace(Format) != 0 && (valueCountSerachElement("|", Format) > 1 || valueCountSerachElement("-", Format) > 2 
                || valueCountSerachElement("-", Format) < 2)) StoreIn.SetDeque("Error Bad Input => " + Format);
                else if (CheckIsspace(Format) != 0 && ((Format.find("|") == std::string::npos))){
                    StoreIn.SetDeque("Error Bad Input => " + Format);
                }
                else if (CheckIsspace(Format) != 0 && (Format.find("|") != std::string::npos)){
                    StoreIn.SetDeque(Format);
                }
            } catch (std::out_of_range &e) {
                std::cout << " | " << e.what() << "|" << std::endl ;
            }
        }
    };
    parsAndCheckData("test", StoreIn.ElementOrder);
    if (flag == 0) ExitMessage("Not Date-value");
};
