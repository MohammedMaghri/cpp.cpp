
#ifndef ZOMBI_HPP
# define ZOMBI_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Zombie {
    private :           
        std::string name;
    public :
        Zombie(std::string _name);
        void announce(void);
        ~Zombie();
};

Zombie *newZombie(std::string name);
void    randomChump(std::string name);
#endif