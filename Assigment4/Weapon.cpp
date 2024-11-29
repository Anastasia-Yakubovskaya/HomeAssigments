#include "Weapon.h"

Weapon::Weapon() : type("Default Type"), damage(0) {}

Weapon::Weapon(std::string type, int damage) : type(type), damage(damage) {}

std::string Weapon::getType() const
{
    return type; // Возвращаем тип оружия
}

int Weapon::getDamage() const
{
    return damage; // Возвращаем урон
}
