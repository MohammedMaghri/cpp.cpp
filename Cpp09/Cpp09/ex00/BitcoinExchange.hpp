/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:08:52 by mmaghri           #+#    #+#             */
/*   Updated: 2024/10/08 16:56:28 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

# include <ostream>
#include <fstream> 
#include <string>
#include <iostream>
#include <map>

class StoreElements {
    private : 
        std::map <std::string, double> values; 
    public :
        std::deque <std::string> ElementOrder ; // Deque Where We are Storing Element's 

        StoreElements(){};

        void setMap(std::string pair, double key){
            (void)pair ;
            (void)key ;
            values.insert(std::make_pair(pair, key));
        };
        void SetDeque(std::string valueStore){
            ElementOrder.push_back(valueStore);
        };
        std::deque<std::string>::iterator begvec(){
            return (ElementOrder.begin());
        };
        std::deque<std::string>::iterator endvec(){
            return (ElementOrder.end());
        };
        std::deque<std::string>::iterator beg(){
            return (ElementOrder.begin());
        };
        std::deque<std::string>::iterator endd(){
            return (ElementOrder.end());
        };
        std::map<std::string, double>::iterator beging(){
            return (values.begin());
        };
        std::map<std::string, double>::iterator theend(){
            return (values.end());
        };
};
std::string FunctionGetElmenetDates (std::string values, std::string seperator);
void CheckInputData(std::string Filename, StoreElements& StoreIn);
void GetDataBase(std::string Filename, StoreElements&  StoreIn);
