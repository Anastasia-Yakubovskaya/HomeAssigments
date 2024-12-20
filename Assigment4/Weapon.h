#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon
{
private:
    std::string type;
    int damage;
public:
    Weapon();
    Weapon(std::string type, int damage);
    std::string getType() const;
    int getDamage() const;
};

#endif
