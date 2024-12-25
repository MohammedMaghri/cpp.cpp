/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:53:45 by mmaghri           #+#    #+#             */
/*   Updated: 2024/08/27 21:34:22 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

size_t returnString(std::string gotten, std::string search)
{
    return (gotten.find(search));
}

std::string replaceString(std::string string, std::string search, std::string replace, size_t position)
{
    (void)search;
    std::string newString;
    size_t pos = 0;
    for (; pos < position; pos++)
            newString += string[pos];
    newString += replace;
    return (newString);
}

void moveto(std::string string, std::ofstream &outfile, std::string s1, std::string s2){
    (void)string ;
    std::string line = string;
    std::string replace ;
    std::string elem ;
    size_t found = 0;
    size_t pos = 0;
    while (found != std::string::npos)
    {
        pos = 1;
        found = returnString(line, s1);
        if (found == std::string::npos)
            break;
        if (found != std::string::npos)
            replace = replaceString(line, s1, s2, found);
        if (found != std::string::npos){
            line = line.substr(found + s1.length());
        }
        elem += replace;
    }
    if (pos == 1){
        elem += line;
    }
    outfile << elem ;
}
void funciontCopy(std::string filename, std::string s1, std::string s2)
{
    std::ifstream   infile(filename);
    std::ofstream   outfile(filename + ".replace");
    std::string     storin;
    std::string     allofit;
    (void)s1 ;

    if (!infile){
        std::cout << "Error!" << std::endl;
        exit (1);
    }
    if (!outfile){
        std::cout << "Error!" << std::endl;
        infile.close();
        exit(1);
    }
    while (getline(infile, allofit))
        storin += allofit += "\n";
    size_t start = 0;
    size_t found = 0;
    found = returnString(storin, s2);
    while (found != std::string::npos)
    {
        if (found == std::string::npos)
            break ;
        found = returnString(storin, s1);
        moveto(storin.substr(start, found + 1), outfile, s1, s2) ;
        storin = storin.substr(found + 1) ;
        found = returnString(storin, s1);
    }
    start = found + 1;
    moveto(storin, outfile, s1, s2);
    infile.close();
    outfile.close();
}

int main(int ac, char **argv)
{
    (void)argv ;
    if (ac != 4){
        std::cout << "Please Provide An input !" << std::endl ;
        exit(1);
    }

    std::string allofit;
    std::string find  = " ";
    if (find.empty()){
        std::cout << "Please Enter the string you want to find" << std::endl;
        return (1);
    }
    if (std::strlen(argv[2]) == 0)
        exit(1);
    funciontCopy(argv[1], argv[2], argv[3]);
    
    return (0);
}
