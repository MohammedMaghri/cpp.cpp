/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 10:36:53 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/28 11:47:26 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

struct Dataa {
    int num ;
};
class Data {
    private : 
        int valid_dataa ;
    public :
        int getData();
        Data();
        Data(const Data& value);
        Data& operator= (const Data& value);
        ~Data();
        void setData(int value);
};