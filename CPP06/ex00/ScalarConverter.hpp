/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:15:02 by mmaghri           #+#    #+#             */
/*   Updated: 2024/09/28 10:17:56 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

class ScalarConverter {
    private :
        ScalarConverter();
    public :
        ScalarConverter(const ScalarConverter&value);
        ScalarConverter& operator= (const ScalarConverter& target);
        ~ScalarConverter();
        static void convert(const std::string value);
};