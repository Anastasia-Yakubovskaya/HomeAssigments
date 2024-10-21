#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
private:
    std::string type;
    int damage;
public:
    Weapon(std::string type, int damage);
    std::string getType() const;
    int getDamage() const;
};

#endif
