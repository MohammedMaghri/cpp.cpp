/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:01:34 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/29 13:12:16 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScalarConverter.hpp"
#include  <cstdlib>
#include <iomanip>
#include <sstream> 
#include <iomanip>

ScalarConverter::ScalarConverter(){
    std::cout << "Default Constructor Called !" << std::endl ;
}

ScalarConverter::ScalarConverter(const ScalarConverter& target){
    *this = target;
};

ScalarConverter& ScalarConverter::operator= (const ScalarConverter& target){
    (void)target ;
    return (*this);
};

int searchHomeMany(std::string value, std::string search){
    int flag = 0;
    for (int i = 0; i < (int)value.length(); i++){
        if (value[i] == search[0]) flag+= 1;
    };
    return (flag);
};


int functionCheck(std::string value, std::string skip){
    for (int i = 0; i < value[i]; i++){
        if (isdigit(value[i]) != 1 && value[i] != skip[0] && value[i] != 'f' && value[i] != '-')
            return (-1);
    };
    if (searchHomeMany(value, "-") > 1) return (-1);
    if ((searchHomeMany(value, "-") >= 1) && value[0] != '-') return (-1);
    if (value[0] == '-' && value[1] == '.') return (-1);
    if (searchHomeMany(value, ".") > 1) return (-1);
    if (searchHomeMany(value, "f") > 0 && searchHomeMany(value, ".") < 1) return (-1);
    if (searchHomeMany(value, "f") > 1) return (-1);
    if (searchHomeMany(value, "f") > 0){
        if (value[value.find("f") - 1] == '.' && (value.find("f") - 1) == 0) return (-1);
    }
    if (searchHomeMany(value, "f") > 0 &&  value.find("f") != (value.length() - 1))
        return (-1);
    return (0);
};

std::string valueReturn (std::string value, int index){ 
    if (value[index + 1] == 'f') value.insert(index + 1, "0");
    if (value[0] == '.') value.insert(0 , "0");
    if (value[index + 1] == '\0') value.insert((value.length()) , "0");
    return (value);
};

int checkNoAl(std::string value){
    for (int i = 0; i < (int)value.length(); i++){
        if (isdigit(value[i]) != 1) return (-1);
    }
    return (0);
}

int ifNumber(std::string value){
    for (int i = 0; i < (int)value.length(); i++){
        if (isdigit(value[i]) == 1) return (0);
    }
    return (-1);
};

int isLargeFloat(float value) {
    return value >= 1e6; // Adjust threshold as needed
}

void PrintAswitch(std::string value){
    if (value.length() == 0){
        std::cout << "Invalid Please Provide an Input !" << std::endl ;
        exit(1);
    }
    if (static_cast<long>(strtol(value.c_str(), NULL, 10)) >= 32 && static_cast<long>(strtol(value.c_str(), NULL, 10)) <= 126) 
        std::cout << "Char     :"<< static_cast<char>(static_cast<long>(strtol(value.c_str(), NULL, 10))) << std::endl ;
    else if (value.length() > 1) std::cout << "Char     :  Non displayable !" << std::endl ; 
    else {
        if (isdigit(value[0])) std::cout << "Char     :  Non displayable !"  << std::endl;
        else std::cout << "Char     : " << static_cast<char>(value[0])  << std::endl;
        }

    //To check the Int 
    if (searchHomeMany(value, ".") > 0 && value.length() > 1){
        if (static_cast<long>(strtol(value.c_str(), NULL, 10)) > 2147483647 || static_cast<long>(strtol(value.c_str(), NULL, 10)) < -2147483648)
            std::cout << "Int      : Out Of range !" << std::endl ;
        else std::cout << "Int      : " << static_cast<long>(strtol(value.c_str(), NULL, 10)) << std::endl;
    }
    else {
        if (value.length() == 1 && isdigit(value[0]) != 1)
            std::cout << "Int      : " << static_cast<int>(value[0]) << std::endl;
        else if (strtol(value.c_str(), NULL, 10) > 2147483647) std::cout << "Int    : Out Of range !" << std::endl ;
        else if (strtol(value.c_str(), NULL, 10) < 0 && strtol(value.c_str(), NULL, 10) < -2147483648) std::cout << "Int    : Out Of range !" << std::endl ;
        else {std::cout << "Int      : " << static_cast<long>(strtol(value.c_str(), NULL, 10)) << std::endl;};
    }

    //To check Float 
    if (value.length() == 1 && isdigit(value[0]) != 1)
            std::cout << "Float    : " << static_cast<int>(value[0]) << ".0f" << std::endl ;
    else if (searchHomeMany(value, ".") > 0 && searchHomeMany(value, "f") == 0 && ifNumber(value) == 0){
        try {
            float tomuch = std::atof(value.c_str());
            if (isLargeFloat(tomuch) == 1) std::cout <<  "Float    : " << tomuch << "f" << std::endl;
            else if (searchHomeMany(std::to_string(tomuch) , ".") == 0) std::cout <<  "Float    : " << tomuch << ".0f" << std::endl;
            else if (searchHomeMany(std::to_string(tomuch) , ".") > 0) {
                std::string put = std::to_string(tomuch);
                if  (put[put.find(".") + 1] != '0') std::cout <<  "Float    : " << tomuch << "f" << std::endl;
                else {
                    std::string va = std::to_string(tomuch).substr(0, std::to_string(tomuch).find("."));
                    std::cout <<  "Float    : " << va << ".0f" << std::endl;
                }
            }
            else  std::cout <<  "Float    : " << tomuch << ".0f" << std::endl;
        } catch (std::invalid_argument &e) {
            std::cout << "Invalid One !" << std::endl ;
        } catch (std::out_of_range &e){
            std::cout << "Float    : Out Of range !" << std::endl ;
        }
    }
    else {
        try {
            float tomuch = static_cast<float>(std::atof(value.c_str()));
            if (searchHomeMany(value, "f") > 0){
                std::string get = std::to_string(tomuch);
                if (get[get.find(".") + 1] == '0' && get[get.find(".") + 2] == '0') std::cout <<  "Float    : " << tomuch << ".0f" << std::endl;
                else std::cout <<  "Float    : " << tomuch << "f" << std::endl;
            }
            else if (isLargeFloat(tomuch) == 1) std::cout <<  "Float    : " << tomuch << "f" << std::endl;
            else std::cout <<  "Float    : " << tomuch << ".0f" << std::endl;
        }  catch (std::invalid_argument &e){
            std::cout << "Float    : No Convertion Possible !" << std::endl;
        } catch (std::out_of_range &e){
            std::cout << "Float    : Out Of range !" << std::endl ;
        }
    }

    //To Doble 
     if (value.length() == 1 && isdigit(value[0]) != 1)
            std::cout << "Float    : " << static_cast<int>(value[0]) << ".0" << std::endl ;
     else if (searchHomeMany(value, ".") > 0 && ifNumber(value) == 0){
        try {
            double tomuch = std::stod(value.c_str());
            if (isLargeFloat(tomuch) == 1) std::cout <<  "Double   : " << tomuch  << std::endl;
            else if (searchHomeMany(std::to_string(tomuch) , ".") == 0) std::cout <<  "Float    : " << tomuch << ".0" << std::endl;
            else if (searchHomeMany(std::to_string(tomuch) , ".") > 0) {
                std::string put = std::to_string(tomuch);
                if  (put[put.find(".") + 1] != '0') std::cout <<  "Double   : " << tomuch  << std::endl;
                else {
                    std::string va = std::to_string(tomuch).substr(0, std::to_string(tomuch).find("."));
                    std::cout <<  "Double   : " << va << ".0" << std::endl;
                }
            }
            else  std::cout <<  "Double   : " << tomuch << ".0" << std::endl;
        } catch (std::invalid_argument &e) {
            std::cout << "Invalid One !" << std::endl ;
        } catch (std::out_of_range &e){
            std::cout << "Double    : Out Of range !" << std::endl ;
        }
    }
    else {
        try {
            double tomuch = static_cast<double>(std::stod(value.c_str()));
            if (searchHomeMany(value, "f") > 0){
                std::string get = std::to_string(tomuch);
                if (get[get.find(".") + 1] == '0' && get[get.find(".") + 2] == '0') std::cout <<  "Float    : " << tomuch << ".0" << std::endl;
                else std::cout <<  "Double    : " << tomuch  << std::endl;
            }
            else if (isLargeFloat(tomuch) == 1) std::cout <<  "Double    : " << tomuch <<std::endl;
            else std::cout <<  "Double    : " << tomuch << ".0" << std::endl;
        }  catch (std::invalid_argument &e){
            std::cout << "Double    :  Non displayable !" << std::endl;
        } catch (std::out_of_range &e){
            std::cout << "Double    : Out Of range !" << std::endl ;
        }
    }
 };

void printNans(std::string pass){
    std::cout << "char   : impossible" << std::endl ;
    std::cout << "int    : impossible" << std::endl ;
    std::cout << "Float  : " << pass << "f" << std::endl ;
    std::cout << "Double : "  << pass << std::endl ;
};


void ScalarConverter::convert(std::string value){

    if (value == "-inff" || value == "+inff" || value == "nan" || value == "nanf" || value == "+inf" || value == "-inf") {printNans(value); return;}
    if (value.length() > 1) {
        if (functionCheck(value, ".") == -1) {
            std::cout << "Invalid Arg .!" << std::endl;
        return ;}
        if (searchHomeMany(value, ".") > 0) {
            value = valueReturn(value, value.find("."));
        }
    }
    if (value.length() == 1) {
        if (static_cast<int>(value[0]) < 32 || static_cast<int>(value[0]) > 126)
         {std::cout << "Not a character !" << std::endl ; return ;}
    }
    PrintAswitch(value);
};