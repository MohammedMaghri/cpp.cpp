/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:03:49 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/14 16:20:18 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "iostream"
# include "string"

class Brain {
    private :
        std::string ideas[100]; 
    public :
        Brain();
        ~Brain();
        Brain(const Brain& target);
        Brain& operator=(const Brain& traget);
};