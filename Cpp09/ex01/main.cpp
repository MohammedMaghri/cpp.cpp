/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:35:00 by mmaghri           #+#    #+#             */
/*   Updated: 2024/11/14 21:07:22 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>
#include <sstream>

int functionGetTwo(RPN &elements) {
    if (elements.ElementStored.size() == 0) return -1  ;
    int toreturn ;
    toreturn = elements.ElementStored.top();
    elements.ElementStored.pop() ;
    return (toreturn);
};

int functionMakeSign (std::string sign, int first, int second) {
    if (sign[0] == '+')
        return (first + second);
    if (sign[0] == '-')
        return (first - second);
    if (sign[0] == '/'){
        if (first == 0){
            throw (std::logic_error("Can't Devide on 0 !"));
        }
        return (first / second);
    }
    if (sign[0] == '*')
        return (first * second);
    return (-999999999);
};

int notOneOfThose(std::string value) {
    for (int index = 0; index < value.size(); index++){
        if (!isdigit(value[index]) && (value[index] != '+' && 
        value[index] != '-' && value[index] != '/' && value[index] != '*')){
            return (-1);
        }
    }
    return (0);
};

int main (int argc, char **argv) {
    if (argc != 2) {std::cout << "Not A Valid Argument's !" << std::endl ; return (0);}
    try {
        RPN elementsStored ;
        long long number  ;
        int first = -1;
        int second = -1;
        std::string string = argv[1];
        std::stringstream s(string);
        string = string.substr(string.find_first_not_of(" \t\n"), string.find_last_not_of(" \t\n") - 1);
        std::string insert ;
        for (;s >> insert;){
            if (insert.length() > 1){std::cout << "Invalid Argument !" << std::endl ; ;exit(1);}
            if (notOneOfThose(insert) == -1) throw (std::logic_error("Error Not a Valid Identifier !!"));
            if (isdigit(insert[0])){
                number = atof(insert.c_str());
                if (number > 10)   throw std::logic_error("Number too large");
                elementsStored.ElementStored.push(number);
            }
            if (insert[0] == '+' || insert[0] == '-' || insert[0] == '/' || insert[0] == '*'){
                if (elementsStored.ElementStored.size() > 1){
                    first = elementsStored.ElementStored.top();
                    elementsStored.ElementStored.pop();
                    second = elementsStored.ElementStored.top() ;
                    elementsStored.ElementStored.pop();
                    elementsStored.ElementStored.push(functionMakeSign(insert, second, first));
                    first  = -1  ;
                    second = -1  ;
                }
            }
        };
        if (elementsStored.ElementStored.size() > 1) throw ("Elemet Last In stack !");
        std::cout << " _> " << elementsStored.ElementStored.top() << std::endl;
    }
    catch (...) {
        std::cout << "e.what() "<< std::endl ;
    }
    return (0);
}