/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:41:22 by mmaghri           #+#    #+#             */
/*   Updated: 2024/10/02 20:48:21 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){
    size = 0;
};

Span::Span(unsigned int value) : size(value) {
};

int Span::GetVar() const{
    return (this->size) ; 
};

void Span::SetVar(int value) {
    this->size = value ;
};

unsigned int Span::getVectorSize(){
    return (values.size());
};

void Span::addNumber(int number){
    if (size > getVectorSize()) {values.push_back(number);}
    else {throw (throwmuch());};
};

void Span::printVecList(){
    for (size_t i = 0; i < values.size(); i++){
        std::cout << values[i] << std::endl ;
    };
};

int Span::longestSpan(){
    std::sort(values.begin(), values.end());
    return (values[(values.size() - 1)] - values[0]);
};

int Span::shortestSpan(){
    std::sort(values.begin(), values.end());
    int flag = INTMAX_MAX;
    for (size_t i = 0; i < values.size(); i++){
        if (getVectorSize() > 1 && i != values.size() - 1)
            if (values[i + 1] - values[i] < flag) flag = values[i + 1] - values[i];
    };
    return (flag);
};

Span::Span(Span& value){
    *this = value ;
};

Span::~Span(){};

Span& Span::operator= (const Span& value){
    if (this != &value){
        this->size = value.size;
        this->values = value.values ;
    }
    return (*this);
}

