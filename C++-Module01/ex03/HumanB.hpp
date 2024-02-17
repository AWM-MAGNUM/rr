#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
private:
    std::string name;
    Weapon *weapon;
public:
    void attack();
    void setWeapon(Weapon &w);
    HumanB(const std::string &name);
};
#endif