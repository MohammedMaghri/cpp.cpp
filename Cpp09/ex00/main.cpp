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
    StoreElements Values;
    GetDataBase("data.csv", Values);
    CheckInputData("input.csv", Values);  

    std::map <std::string, double>::iterator it = Values.beging();
    std::map <std::string, double>::iterator itend = Values.theend() ;
    std::cout << std::endl ;
    for (; it != itend ; it++){
        std::cout << it->first << " -- " << it->second << std::endl ;
    };
    return (0);
};