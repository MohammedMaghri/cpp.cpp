/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:16:11 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/22 21:30:49 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
    private :
        std::string target ;
    public :
        std::string Get_target();
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string& value);
        RobotomyRequestForm(const RobotomyRequestForm& value);
        RobotomyRequestForm& operator= (const RobotomyRequestForm& value);
        ~RobotomyRequestForm();
        std::string functionDraw() ;
        void execute(Bureaucrat const & executor);
        class CatchError : public std::exception {
            public :
                const char *what() const throw() ;
        };
};
