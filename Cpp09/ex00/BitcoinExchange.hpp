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
        std::map <std::string, int> NewMap;
        StoreElements(){};
        void setMap(std::string pair, double key){
            (void)pair ;
            (void)key ;
            values.insert(std::make_pair(pair, key));
        };
        void setNewMap(std::string pair, int key){
            (void)pair ;
            (void)key ;
            NewMap.insert(std::make_pair(pair, key));
        };
        std::map<std::string, int>::iterator postionStart(){
            return (NewMap.begin());
        };
        std::map<std::string, int>::iterator positionEnd(){
            return (NewMap.end());
        };

        std::map<std::string, double>::iterator beging(){
            return (values.begin());
        };
        std::map<std::string, double>::iterator theend(){
            return (values.end());
        };
};
void functionCheckWithExactDates (std::string values, StoreElements Data) ;
std::string FunctionGetElmenetDates (std::string values, std::string seperator);
void CheckInputData(std::string Filename, StoreElements& StoreIn);
void GetDataBase(std::string Filename, StoreElements&  StoreIn);
std::string ParsDays(std::string value);