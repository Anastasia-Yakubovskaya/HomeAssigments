#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
private:
    std::string type;
    int damage;
public:
    Weapon(); // Конструктор по умолчанию
    Weapon(std::string type, int damage); // Конструктор с параметрами
    std::string getType() const; // Изменено на const
    int getDamage() const; // Изменено на const
};

#endif
