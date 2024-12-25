/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:38:06 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/30 18:09:50 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename Arrayt>

class Array {
    private :
        Arrayt *array;
        size_t  size ;
    public :
        size_t Size() const {
            return (size);
        }
        Array() : array(new Arrayt(NULL)) , size(0){
            std::cout << "Constructor Is called !" << std::endl ;
        };
        Array(unsigned int n) {
            size = n ;
            array = new Arrayt[n];
            for (size_t i = 0; i < n; i++){
                array[i] = i ;
            }
        };
        Array(Array<Arrayt> const& src){
            *this = src ;
        };
        Array& operator= (Array<Arrayt> const& src){
            if (this != &src){
                this->size = src.size ;
                array = new Arrayt[size]  ;
                for (size_t i = 0; i < size; i++){
                    array[i] = src.array[i] ;
                };
            };
            return (*this);
        };
        class tohieght : public std::exception {
            const char * what() const throw() {
                return ("Max Value !");
            };
        };

    Arrayt& operator[](size_t size) const {
        if (this->size < size){
            throw (tohieght());
        }
        return (array[size]);
    }
    ~Array(){
        delete [] array ;
        std::cout << "Destructor Called !" << std::endl ;
    };
};