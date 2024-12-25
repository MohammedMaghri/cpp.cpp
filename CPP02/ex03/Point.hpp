/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 22:09:00 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/04 15:15:45 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Fixed.hpp"
#include <cmath>

class Point {
    private :
        const Fixed x;
        const Fixed y;
    public : 
        Point();
        Point(const float x, const float y);
        Point(Point &value);
        Point& operator=(const Point &value);
        ~Point();
        float getY() const; 
        float getX() const; 
};

float negdrop(float value);
float area (Point const &a, Point const &b, Point const &c);
bool  bsp( Point const &a, Point const &b, Point const &c, Point const &point);