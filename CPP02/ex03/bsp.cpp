/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 22:08:55 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/04 15:16:08 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

Point::Point() : x(0), y(0){
    
} ;

Point::Point(const float _x, const float _y) : x(_x) , y(_y){
};

Point::Point(Point &value){
    std::cout << "Copy Assignment Called" << std::endl;
    value = *this;
};

Point& Point::operator=(const Point &value){
    if (this != &value){
        (Fixed)this->x = value.x ;
        (Fixed)this->y = value.y ;
    };
    return (*this);
};

Point::~Point(){
    std::cout << "Destructor Called" << std::endl ;
};

float Point::getX() const {
    float value = this->x.toFloat();
    return (value);
};

float Point::getY() const {
    float value = this->y.toFloat();
    return (value);
};

float negdrop(float value){
    if (value < 0)
        value *= -1;
    return (value);
}

float area(Point const &a, Point const &b, Point const &c){
    float x1 = a.getX();
    float y1 = a.getY();
    float x2 = b.getX();
    float y2 = b.getY();
    float x3 = c.getX();
    float y3 = c.getY();

    float valfi = (x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2));
    return negdrop(valfi);
};

bool bsp(Point const &a, Point const &b, Point const &c, Point const &Point){
    float ar1 = area(a, b ,Point);
    float ar2 = area(b, c ,Point);
    float ar3 = area(c, a ,Point);
    float mn = area(a, b , c);

    float mainone =  ar1 + ar2 + ar3 ;
    if (ar1 == 0 || ar2 == 0 || ar3 == 0 || mainone == 0)
        return (0);
    if (mainone == mn)
        return (true);
    return (false);
};