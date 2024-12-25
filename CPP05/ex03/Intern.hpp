/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:41:25 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/23 17:40:27 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "AForm.hpp"

class Intern {
    public :
        Intern();
        Intern(const Intern& value);
        Intern& operator= (const Intern& value);
        ~Intern();
        AForm *rob(std::string target_name);
        AForm *pres(std::string target_name);
        AForm *shru(std::string target_name);
        AForm* makeForm(std::string FormName, std::string target_name);
};